#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

template <typename T>
T Max(T x, T y)
{
	cout << "������� ��������� �������. " << endl;
	return x > y ? x : y;
}

const char* Max(const char* a, const char* b) {
	cout << "������� ������������������ �������. " << endl;
	return strlen(a) > strlen(b) ? a : b;
}

int main() {
	setlocale(LC_ALL, "ru");
	int elem1 = Max(10, 3);
	cout << "������������ �����: " << elem1 << endl << endl;
	double elem2 = Max(3.5, 1.1);
	cout << "������������ �����: " << elem2 << endl << endl;
	const char* str1 = "sometext";
	const char* str2 = "othertext";
	cout << "������������ ������: " << Max(str1, str2) << endl;
	return 0;
}