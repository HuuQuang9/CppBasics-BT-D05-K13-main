#include <iostream>

using namespace std;


int main()
{
	float math, physical, chemistry, average;
	cout << "nhap diem math: ";
	cin >> math;
	cout << "nhap diem physical: ";
	cin >> physical;
	cout << "nhap diem chemistry: ";
	cin >> chemistry;
	average = (math + physical + chemistry) / 3;
	cout << "math: "<<math; cout << " physical: "<<physical;
	cout << " chemistry: " << chemistry; cout << " arevage: " << average << endl;
	if (average < 5) {
		cout << "fail Exam";
	}
	else if(average > 5 && average <7) {
		cout << "average";
	}
	else if (average > 7 && average < 8) {
		cout << "fair";
	}
	else {
		cout << "Good";
	}

}
