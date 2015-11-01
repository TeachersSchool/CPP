#include <iostream>
using namespace std;

double getIntValue();
// Вычисление среднего геометрического
// Сразу описываем метод
double geom(double x, double y) { 
	return sqrt(x*y);
}
int main() {
	double x = getIntValue();
	double y = getIntValue();
	cout << geom(x, y);
	return 0;
}
double getIntValue() {
	int x;
	cout << "Enter integer value: ";
	cin >> x;
	return x;
}
