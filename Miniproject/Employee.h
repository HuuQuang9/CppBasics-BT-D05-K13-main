#pragma once

#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
	int m_id;
	string m_name;
	string m_email;
	string m_phone;

public:
	//constructor
	Employee() {};

	Employee(int id, string name)
		: m_id{ id }, m_name{ name }
	{}
	//
	void show();

	void input();

	//gettesr, setters

};

