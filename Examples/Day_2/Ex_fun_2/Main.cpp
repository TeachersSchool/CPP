#include <iostream>
using namespace std;

int getIntValue(); // определение функции
int main() {
	int x = getIntValue(); // вызов функции
	cout << sqrt(x);
	system("pause");
	return 0;
}
int getIntValue() { // описание функции
	int x;
	cout << "Enter integer value: ";
	cin >> x;
	return x;
}
