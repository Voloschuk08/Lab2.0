// Lab_02.cpp
// < Волощук Ольга >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 1

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double  alpha; // вхідний параметр
	double pi = M_PI; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу

	cout << "alpha: "; cin >> alpha;

	z1 = 2 * pow(sin(3 * pi - 2 * alpha), 2) * pow(cos(5 * pi + 2 * alpha), 2);

	z2 = 1.0 / 4 - (1.0 / 4 * sin(((5.0 * pi) / 2) - (8.0 * alpha)));

	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;


	return 0;

}