#pragma once
#include <string>
#include <iostream>
using namespace std;
class person
{
protected:
	int age;
	long id;
public:
	person();
	person(long name, int age);
	virtual void print()=0;
	bool operator<(person& obj);
	int getAge();
	long getName();

	~person();
};

