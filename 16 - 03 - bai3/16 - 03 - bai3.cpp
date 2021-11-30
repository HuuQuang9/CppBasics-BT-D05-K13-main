#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "so nguyen lon hon 100 va duoi 200 chia het cho 7 la: ";
    for (int i = 14; 7 * i < 200; i++) {
        a = 7 * i;
        if (100 < a && a < 200) {
            cout << a << " ";
        }
        
   }

}


