#pragma once
#include "Employee.h"
class Programmer:public Employee
{
public:
	Programmer(string name):Employee(120000,name,"Programmer"){}
	Programmer():Employee(120000,"unknown","Programmer"){}
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

