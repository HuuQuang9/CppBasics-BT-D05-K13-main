#include <iostream>
using namespace std;
int main() {
	for (int j = 0; j < 15; j++) {
		cout << endl;
		for (int i = 0; i < 17; i++) {
			if (j == 6) { cout << " * * * * I L O V E Y O U ❤ * * * * "; break; }
			else if ((i + j < 2) || (i - j > 14 && j < 2) || (i - j > 4 && j < 4 && i + j < 12 && i < 12) || (j > 6 && (j - i > 6 || i + j > 22))) cout << " ";
			else cout << " * ";
		}
	}
}
