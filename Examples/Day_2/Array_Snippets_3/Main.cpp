#include <iostream>
#include <ctime>
using namespace std;
int main() {
	int arr[5]; // определён массив из 5 элементов
	
	// заполним массив десятью
	for (int i = 0; i < 10; i++) { 
		arr[i] = i;
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}