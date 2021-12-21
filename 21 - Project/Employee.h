#pragma once

#include <iostream>
#include <string>

using namespace std;
class Employee
{
protected:
	int  m_id{ 0 };
	string m_name;
	string m_gender;
	string m_email;

public:
	Employee() {};
	Employee(string name, int id, string gender, string email) :m_name{ name }, m_id{ id }, m_gender{ gender }, m_email{ email }
	{}

	virtual void show();

	virtual void input();

	string Getname();

	int Getid();
};

