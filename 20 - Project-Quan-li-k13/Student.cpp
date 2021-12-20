
#include "Student.h"

using namespace std;

void Student::show()
{
	Employee::show();
	cout << m_class << m_degree << " " << m_birth;

}

void Student::input()
{
	Employee::input();
	cout << "enter class: ";
	cin >> m_class;
	cout << "enter degree: ";
	cin >> m_degree;
	cout << "enter birth: ";
	cin >> m_birth;
}
