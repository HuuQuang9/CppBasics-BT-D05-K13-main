#include "Testter.h"
#include "Testter.h"
void Testter::show()
{
	cout << "Tester code: "<< m_testcode;
}

void Testter::input()
{
	Employee::input();
	cout << "Enter tester code: ";
	getline(cin, m_testcode);
}
