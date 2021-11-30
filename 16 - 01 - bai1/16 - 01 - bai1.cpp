
#include <iostream>

using namespace std;

int main()
{
    int a, b, cong, tru, nhan;
    double chia;
    cout << "nhap a: ";
    cin >> a;
    cout << "nhap b: ";
    cin >> b;
    cong = a + b;
    cout << "a + b = " << cong << endl;
    tru = a - b;
    cout << "a - b = " << tru << endl;
    tru = b - a;
    cout << "b - a = " << tru << endl;
    nhan = a * b;
    cout << "a * b = " << nhan << endl;
    chia = double(a) / double(b);
    cout << "a / b = " << chia << endl;
    chia = double(b) / double(a);
    cout << "b / a = " << chia << endl;



}

