#include "person.h"



person::person()
{
}

person::person(long name, int age)
{
	this->age = age;
	this->id = id;
}

void person::print()
{
	cout <<"the name:"<< id<<endl<<"the age:"<<age<<endl;
}

bool person::operator<(person & obj)
{
	return this->age < obj.age;
}

int person::getAge()
{
	return age;
}
long person::getName()
{
	return id;

}

person::~person()
{
}
