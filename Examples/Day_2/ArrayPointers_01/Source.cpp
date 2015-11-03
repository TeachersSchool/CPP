#include "iostream"
#include "ctime"
using namespace std;
int main() {
	srand(time(0));
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	// используем курсор
	int* curr = arr + 9;
	cout << endl;
	for (int i = 0; i < 10; i++)
		cout << *curr-- << " ";
	system("pause");
	return 0;
}
