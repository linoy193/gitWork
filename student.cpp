#include "student.h"



student::student()
{
}



void student::print()
{
	cout << "GPA" << avrege << endl << "age" << age << endl << "name" << id;
}


float student::GetGPA()
{
	return this->avrege;
}

student::~student()
{
}
