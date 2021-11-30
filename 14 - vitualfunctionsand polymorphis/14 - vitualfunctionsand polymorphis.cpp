#include <iostream>
#include <string>

using namespace std;

class Base { //class father
protected : // khong the truy cap tu ben ngoai
    int m_value{};

public: // co the truy cap tu ben ngoai
    Base(int value) {
        m_value = value;
    }
    // : m_value{value} cú pháp mới ưu tiên hơn 

    int getvalue() {
        return m_value;
    }

    virtual string  getname() {
        return "Base";
    }
};

class Derived : public Base {
public : // co the truy cap tu ben ngoai
    Derived(int value)
        :Base{ value }
    {

    }

    string getname() {
        return "derived";
    }
    
    int getvaluedouble() {
        return 2 * m_value;
    }
};

// more exemple

class A {
public:
    virtual string getName() {
        return "A";
    }
};

class B : public A {
public:
    virtual string getName() {
        return "B";
    }
};

class C : public B {
public:
    virtual string getName() {
        return "C";
    }
};

class D : public C {
public:
    virtual string getName() {
        return "D";
    } 
};

int main()
{
    // 1. set Derived pointers and references to Derived objects
    /*Derived derived{ 10 };
    cout << "derived is: " << derived.getname() << " and has value : " << derived.getvalue() << endl;

    Derived& rDerived{ derived };
    cout << "rDerived is: " << rDerived.getname() << " and has value : " << rDerived.getvalue() << endl;
    Derived* pDerived{ &derived };
    cout << "pDerived is: " << pDerived->getname() << " and has value: " << pDerived->getvalue() << endl;*/

    //2. set a Base  pointer and references to Derived objects

   /* Derived derived{ 10 };
    Base& rBase{ derived };
    Base* pBase{ &derived };

    cout << "Derived is: " << derived.getname() << " and value: " << derived.getvalue() << '\n';
    cout << "rBase is: " << rBase.getname() << " and value: " << rBase.getvalue() << '\n';
    cout << "pBase is: " << pBase->getname() << " and value: " << pBase->getvalue() << '\n';*/

    C c;
    A * pBase{ &c };
    cout << "rBase is: " << pBase->getName() << '\n';
}


