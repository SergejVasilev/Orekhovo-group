#pragma once
#include <iostream>

using namespace std;        //чтобы не писать std::

double SUM(double x, double y)
{
	double res = x + y;
	cout << "Рузультат сложения " << x << " и " << y << " = " << res << endl;
	cout << "-----------------------------------------" << endl;
	return res;
}
double RAZN(double x, double y)
{
	double res = x - y;
	cout << res << endl;
	cout << "Рузультат вычитания " << x << " из " << y << " = " << res << endl;
	cout << "-----------------------------------------" << endl;
	return res;
}
double UMN(double x, double y)
{
	double res = x * y;
	cout << res << endl;
	cout << "Рузультат умножения " << x << " на " << y << " = " << res << endl;
	cout << "-----------------------------------------" << endl;
	return res;
}
double DEL(double x, double y)
{
	double res = x / y;
	cout << res << endl;
	cout << "Рузультат деления " << x << " на " << y << " = " << res << endl;
	cout << "-----------------------------------------" << endl;
	return res;
}

