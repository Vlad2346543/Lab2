#include <cstdio>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b, c;

	cout << "Введіть перше число: ";
	cin >> a;
	cout << "Введіть друге число: ";
	cin >> b;

	c = a + b;

	cout << "Результат: " << c << endl;