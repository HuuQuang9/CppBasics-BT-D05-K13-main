
#include <iostream>
#include <string>

using namespace std;

//base class
class Employee {
protected :
    int m_id;
    string m_name;
    string email;
    string phone;

public:
    void ShowInfo() {
        cout << "name: " << m_name << '\n';
    }
};

class Programmer :public Employee {
    string programminglanguage;
};

int main()
{
    Programmer pr;
    pr.ShowInfo();
}

/*
- quan ly 1 cong ty phan mem: progamer, tester, manager ...
- danh sach cac nhan vien trong cong ty.
- cac tinh nang: in ra toan bo nhan vien (ten, email, luong, ...)
chi in cac programmer, them nhan vien vao,tim kiem, sap xep...

*/

/*
- Base (parent, super) Class: Employee
-Sub (child, derived) Class: Programmer, Tester, Manager,...
- Object 
*/
/*16/11
- adding modifiers, getter, setter, contructors
- Programmer, Tester, Manager
*/