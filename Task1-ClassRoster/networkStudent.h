#pragma once
#include "student.h"
class networkStudent :
	public student
{
public:
	networkStudent();
	~networkStudent();
	Degree GetDegreeProgram();
};

