

#include <iostream>
#include <string>
using namespace std;

class Base {

private :
    int m_private{};

protected:
    int m_protected{};

public:
    int m_public{};

public :
    void info() {
        Base::info();
        cout << "derived" << '\n';
    }

};

class Derived :public Base {

public:
    Derived() {
        m_public = 1;
        m_protected = 1;
        /*m_private = 1;*/ // cannot 
    }
};

int main()
{
    Base base;
    base.m_public = 1;
    //base.m_protected = 1; cannot
    //base.m_private = 1;cannot
}