
#include <iostream>

#include <string>

using namespace std;

int main()
{
	int sv = 0;
	cout << "co bao nhieu sinh vien: ";
	cin >> sv;
	cin.ignore(1, '\n');
	string name[10];
	int age[10];
	string lop[10];
	int t[10];
	int l[10];
	int h[10];
	string sothich[10];
	string xeploai[10];
	for (int i = 0; i < sv; i++) {
		cout << "thong tin sinh vien " << i + 1 << endl;
		cout << "enter your name:";
		getline(cin, name[i]);
		cout << "enter your old:";
		cin >> age[i];
		cout << "enter your class:";
		cin >> lop[i];
		cout << "diem toan:";
		cin >> t[i];
		cout << "diem ly:";
		cin >> l[i];
		cout << "diem hoa:";
		cin >> h[i];
		cout << "so thich:";
		cin.ignore(1, '\n');
		getline(cin, sothich[i]);
		float tb ;
		tb = (t[i] + l[i] + h[i]) / 3;
		if (tb > 8) {
			xeploai[i] = "G";
		}
		else {
			if (8 > tb >= 6.5) {
				xeploai[i] = "Kha";
			}
			else {
				if (6.5 > tb >= 5) {
					xeploai[i] = "TB";
				}
				else {
					xeploai[i] = "Yeu";
				}
			}
		}
	}
	// phan tren la nhap vao du lieu cho cac sinh vien
	// phan duoi la in ra du lieu cua cac sinh vien
	for (int j = 0; j < sv; j++) {
		cout << "thong tin sinh vien " << j + 1 << endl;
		cout << "ho va ten: " << name[j] << endl;
		cout << "age: " << age[j] << endl;
		cout << "class: " << lop[j] << endl;
		cout << "xep loai: " << xeploai[j] << endl;
		cout << "so thich: " << sothich[j] << '\n';
	}
}

// nhap vao nhieu sv
// // Nhap vao sv: ho ten, tuoi, lop
// Nhap vao diem so cac mon: T, L, H
// Nhap so thich (the thao, am nhac)
// Tinh diem TB cac mon hoc, xep loai
// >8 gioi; 8 > TB >= 6.5 Kha; 6.5 > TB >=5 : TB; 
// In ra thong tin sv
