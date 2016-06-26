#include <fstream>
#include <iostream>
using namespace std;
void main()
{
	char buff[50]; // buffer string
	ifstream fin("MyFile.txt"); // stream creation and a file opening
	// read to a first space
	fin >> buff; 
	cout << buff << endl; 

	fin.getline(buff, 50); // getting whole line
	fin.close(); // close file
	cout << buff << endl; // print line
	system("pause");
}