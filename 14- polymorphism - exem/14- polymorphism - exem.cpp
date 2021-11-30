#include <iostream>
#include <string>

using namespace std;
// Base class: Animal/ name/ ... / speak()..

// sub classes : Cat, Dog, 

// dynamic array // vector
class Animal {
protected:
    string m_name;
public:
    Animal(string name)
        : m_name{name}
    {

     }

    string getname() {
        return m_name;
    }

    virtual string speak() {
        return "???";
    }

};

class Cat : public Animal {
public:
    Cat(string name)
        :Animal{ name } 
    {

    }

   /* virtual string speak() {
        return "meo meo";
    }*/

    //pure virtual function // abstract
    virtual string speak() = 0;
};




class Dog : public Animal {
public:
    Dog(string name)
        :Animal{ name }
    {

    }

    virtual string speak() {
        return "gau gau";
    }
};
int main()
{
    /* Cat cat{ "Cat black" };
     Dog dog{ "Dog mun" };
     cout << cat.getname() << " say " << cat.speak() << '\n';
     cout << dog.getname() << " say " << dog.speak() << '\n';*/

     //dynamic array // (vector)

   /* Cat cat1{ "cat 1" };
    Cat cat2{ "cat 2" };
    Cat cat3{ "cat 3" };

    Dog dog1{ "dog 1" };
    Dog dog2{ "dog 2" };
    Dog dog3{ "dog 3" };

    Animal * animals[]{ &cat1,&cat3, &cat2,&dog3, &dog1, &dog2 };

    for ( auto animal : animals) {
        cout << animal->getname() << " say " << animal->speak() << '\n';
    }*/
    
   /* Animal animal{ "animal" };
    cout << animal.getname() << " say " << animal.speak() << '\n';*/

    Cat cat{ "meo den" };
    cout << cat.getname() << " say " << cat.speak() << '\n';
}


/*
--quan li cac con vat nuoi: meo, cho
--danh sach
*/

/*
--B1: Base class
--B2: sub classes
--B3: array[BaseClass*]
*/