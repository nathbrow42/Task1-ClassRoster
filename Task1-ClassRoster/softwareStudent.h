#pragma once
#include "student.h"
class softwareStudent :
	public Student
{
public:
	softwareStudent();
	~softwareStudent();
	Degree GetDegreeProgram();
private:
	Degree degreeProgram;
};

