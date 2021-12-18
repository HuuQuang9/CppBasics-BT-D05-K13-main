#pragma once

#include <iostream>
#include <string>

using namespace std;
class Employee
{
protected:
	int m_id{ 0 };
	string m_name;
	string m_email;
	string m_address;


public:
	Employee() {};
	Employee(int id, string name, string email, string address) :m_id{ id }, m_name{ name }, m_email{ email }, m_address{address}
	{}

	void show();

	void input();

	string getname();
};

