
#include "Student.h"

using namespace std;

void Student::show()
{
	Employee::show();
	cout << m_class << '\n';

}

void Student::input()
{
	Employee::input();
	cout << "enter class: ";
	cin >> m_class;


}
