#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout("MyFile.txt"); // создаём поток для записи и связываем его с файлом 
	int i = 0;
	// запишем несколько строк
	// используем цикл с предусловием
	while (i < 10) {
		fout << i++; // запись строки в файл
	}
	fout.close(); // закрываем файл
	system("pause");
	return 0;
}