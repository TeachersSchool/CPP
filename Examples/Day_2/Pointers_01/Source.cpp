#include <iostream>
using namespace std;

int main() {
	double x = 3;
	int *ptr1(nullptr);
	double *ptr2;
	ptr2 = &x; // указатель связан с адресом x	
	cout << *ptr2; // получение значение по адресу
	system("pause");
	return 0;
}