#pragma once
#include "Employee.h"
class Boss:public Employee
{
public:
	Boss(string name):Employee(420000,name,"Boss"){}
	Boss():Employee(420000,"Unknown","Boss"){}
	void printInfo();

	virtual float getSallary() override
	{
		return sallary;
	}
	virtual string getPost() override
	{
		return post;
	}
};

