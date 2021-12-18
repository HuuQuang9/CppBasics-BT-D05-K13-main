
#include "Student.h"

void Student::show()
{
	Employee::show();
	cout << m_class << m_degree << " " << m_birth;

}
