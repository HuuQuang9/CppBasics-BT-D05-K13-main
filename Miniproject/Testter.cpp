#include "Testter.h"
#include "Testter.h"
void Testter::show()
{
	Employee::show();
	cout << "I am Tester, i test code: "<< m_testcode;
}

void Testter::input()
{
	Employee::input();
	cout << "Enter language code : ";
	getline(cin, m_testcode);
}
