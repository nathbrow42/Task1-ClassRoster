#pragma once
#include "student.h"
class softwareStudent :
	public Student
{
public:
	softwareStudent();
	softwareStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeType);
	~softwareStudent();
	Degree GetDegreeProgram();
private:
	Degree degreeProgram;
};

