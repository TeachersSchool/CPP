#include <iostream>
using namespace std;

void getAbs(const int& x) {
	//if (x < 0) x = -x;
}
int main() {
	int x;
	cout << "Enter x: ";
	cin >> x;
	getAbs(x);
	cout << "Absolute value: " << x;
	system("pause");
	return 0;
}
