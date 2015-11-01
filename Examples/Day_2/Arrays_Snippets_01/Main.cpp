#include <iostream>
using namespace std;
int main() {
	int arr[10]; // определён массив из 10 элементов
	// пример 1
	/*for (int i = 0; i < 10; i++)
		cout << arr[i] << " ";*/

	// пример 2
	/*cout << "\n";
	for (int i = 0; i < 10; i++) {
		arr[i] = 0;
		cout << arr[i] << " ";
	}*/
	// пример 3. случайные числа
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 100; // значение от 0 до 99
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}