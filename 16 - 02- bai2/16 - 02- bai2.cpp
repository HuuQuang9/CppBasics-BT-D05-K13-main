#include <iostream>

using namespace std;



int main()
{
    int array[10];
    int min;
    cout << "nhap gia tri cho mang" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "phan tu thu " << i+1 << " la: ";
        cin >> array[i];
        if (i == 0) {
            min = array[i];
        }
        if (min > array[i]) {
            min = array[i];
        }
    }
    cout << "cac phan tu cua mang:";
    for (int j = 0; j < 10; j++) {
        cout << " " << array[j];
    }
   
    cout << '\n' << "min = " << min << endl;

}

