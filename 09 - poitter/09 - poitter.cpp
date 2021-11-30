

#include <iostream>
#include <string>

using namespace std;


int main()
{
    int x{ 10 };
    cout << x << '\n';
    cout << &x << '\n';

    int* iptr{ &x };
    cout << *iptr << '\n';
    cout << iptr << '\n';



}

