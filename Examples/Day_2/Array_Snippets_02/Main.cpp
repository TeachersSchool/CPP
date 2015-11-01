#include <iostream>
#include <ctime>
using namespace std;
int main() {
	int arr[10]; // определён массив из 10 элементов

	// инициируем рандомизацию чисел
	srand(time(0));
	cout << "RAND_MAX = "<< RAND_MAX << "\n"; // значение константы RAND_MAX
	// получение случайного числа из диапазона от A до B
	int A = 10, B = 11;
	cout << "Random value " << A + rand() % (B - A + 1) << "\n";	
	// случайное вещественное значение (0, 1)
	cout << "Random double " << (double)rand() / RAND_MAX << "\n";
	// заполним массив
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 100; // значение от 0 до 99
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}