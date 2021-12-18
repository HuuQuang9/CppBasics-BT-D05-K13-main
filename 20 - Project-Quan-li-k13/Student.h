#include "Employee.h"

class Student : public Employee
{
protected:
	string m_degree;
	string m_class;
	string m_birth;

public:

	void show();

	void input();
};
