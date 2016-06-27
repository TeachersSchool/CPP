// code from http://stackoverflow.com/questions/1825720/c-high-precision-time-measurement-in-windows
#include <iostream>
#include <Windows.h>
using namespace std;
void main() {
	LARGE_INTEGER frequency;
	if (!::QueryPerformanceFrequency(&frequency))
		throw "foo";

	LARGE_INTEGER start;
	if (!::QueryPerformanceCounter(&start))
		throw "foo";

	// Calculation.
	for (int i = 0; i < 10000; i++);

	LARGE_INTEGER end;
	if (!::QueryPerformanceCounter(&end))
		throw "foo";

	double interval = static_cast<double>(end.QuadPart - start.QuadPart) / frequency.QuadPart;
	system("pause");
}