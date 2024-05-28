#pragma once
#include "Employee.h"
class Designer: public Employee
{
public:
	Designer(string name):Employee(115000,name,"Designer"){}
	Designer():Employee(115000,"Unknown","Designer"){}
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

