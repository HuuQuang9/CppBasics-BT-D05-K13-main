#include "Programmer.h"

void Programmer::show()
{
	Employee::show();
	cout << m_name <<" write code: " << m_programinglanguage << endl;
}

void Programmer::input()
{
	Employee::input();
	cout << "enter programinglanguage: ";
	getline(cin, m_programinglanguage);
}
