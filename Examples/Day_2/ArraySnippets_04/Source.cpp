#include <iostream>
using namespace std;

int main() {
int arr[10]; // определён массив из 10 элементов
//for (int i = 0; i < 10; i++) {
//	cout << arr[i] << " ";
//	cout << arr + i << "\n";
//}
//for (int i = 0; i < 10; i++) {
//	arr[i] = 0;
//	cout << arr[i] << " ";
//	cout << arr + i << "\n";
//}
short shArr[10];
shArr[0] = 1;
for (int i = 1; i < 10; i++) {
	shArr[i] = shArr[i-1]*i;
	cout << i << " " << shArr[i] << " ";
	cout << shArr + i << "\n";
}
system("pause");
return 0;
}