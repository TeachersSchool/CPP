// Standard output stream COUT
// Output to a file
#include <iostream>
#include <fstream>
using namespace std;
void main() {
	setlocale(LC_ALL, "Russian");
	ofstream f; // файловый поток
	f.open("MyFile.txt"); // связываем поток с файлом
	f << "Тестовая строка для файла";	// пишем в файл
	cout << "Тестовая строка для экрана";
	f.close(); // закрываем поток
	system("pause");
}
