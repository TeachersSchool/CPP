#include <iostream>
using namespace std;

void print(char* str1, char *str2 = "Default string") {
	cout << str1 << " " << str2 << "\n";
}
int main() {
	char *text = new char[256];
	cout << "Enter your string: ";
	cin >> text;
	// умаливаемое значение будет заменено
	print(text, "My string");
	// у второго параметра есть умалчиваемое 
	// значение, его можно опускать при вызове
	print(text);
	delete text; // освобождаем память
	return 0;
}
