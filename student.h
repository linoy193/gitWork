#pragma once
#include "person.h"

#include <string>
#include <iostream>
using namespace std;
class student: public person
{
	int avrege;
	
public:
	student();
	student(int ag, float GP, long namestr) :avrege(GP), person(namestr,ag ){}
	void print();
	bool isOutStending(int GPA) {
		if (this->avrege > 85) {
			return 0;
		}
		else
		{
			return false;
		}
	}
	float GetGPA();
	~student();
};

