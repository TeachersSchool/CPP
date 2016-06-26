#include <fstream>
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	char buff[50]; 

	ifstream fin("ErrorName"); // !!!

	if (!fin.is_open()) // file is not opened
		cout << "Ошибка при открывании файла!\n"; 
	else
	{
		fin.getline(buff, 50); 
		fin.close(); 
		cout << buff << endl; 
	}
	system("pause");	
}