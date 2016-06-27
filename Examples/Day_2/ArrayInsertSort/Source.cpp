#include <iostream>
#include <ctime>
using namespace std;
#define N 10
void insertionSort(int a[], int n) {
	for (int i = 1; i < n; i++) { // Левее i-ого элемента массив отсортирован
		int k = a[i]; // Запоминаем, потому что затрем сдвигом
		int j = i - 1;
		while (j >= 0 && a[j] > k) { // Двигаем все элементы, больше k
			//comp++;
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = k; // Ставим k на место
	}
}
int main() {
	int arr[N]; // определён массив из 10 элементов

				 // инициируем рандомизацию чисел
	srand(time(0));
	// заполним массив
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % 100; // значение от 0 до 99
		cout << arr[i] << " ";
	}
	insertionSort(arr, N);
	cout << "================\n";
	for (int i = 0; i < N; i++) {		
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}