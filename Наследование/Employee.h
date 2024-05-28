#pragma once
#include <iostream>
using namespace std;
class Employee

{
protected:
	float sallary;
	string post, name;
public:
	virtual float getSallary() = 0;
	virtual string getPost() = 0;
	Employee(float sallary, string name, string post): sallary{sallary},name{name},post{post}{}
	

};

