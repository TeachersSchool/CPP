#include <iostream>

using namespace std;
int main() {
	int* ptr = new int(); // выделили память под int
	//int* ptr = new int(1); // выделили память и сохраняем туда число 1
	cout << ptr << "\n";
	cout << *ptr << "\n";
	*ptr = 15;
	cout << *ptr << "\n";
	//!!!!ptr++; 
	//cout << ptr << "\n";
	delete ptr;
	system("pause");
	return 0;
}