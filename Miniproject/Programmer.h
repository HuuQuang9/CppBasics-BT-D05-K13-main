#pragma once

#include "Employee.h"

class Programmer : public Employee 
{
protected:
	string m_programinglanguage;

public:
	Programmer() {};
	Programmer(int id, string name) :Employee{ id, name }
	{};
	void show() override;
	void input() override;
};

