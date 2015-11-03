#include <iostream>
using namespace std;
void changeArray(int[]);
int main() {
	int ar[] = { 1,2,3,4 };
	cout << *ar << *ar + 1 << *ar + 2 << *ar + 3 <<endl;	
	changeArray(ar);
	cout << ar[0] << ar[1] << ar[2] << ar[3] << endl;	
	cout << *ar << *ar + 1 << *ar + 2 << *ar + 3 << endl;
	system("pause");
	return 0;
}
void changeArray(int ar[]) {
	ar[0] = ar[3];
}
