#pragma once
#include <iostream>
using namespace std;
double a, b;
double SUM(double a, double b)
{
	double res = a + b;
	cout << res << endl;
	return res;
}

double RAZN(double a, double b)
{
	double res = a - b;
	cout << res << endl;
	return res;
}
double UMN(double a, double b)
{
	double res = a * b;
	cout << res << endl;
	return res;
}
double DEL(double a, double b)
{
	double res = a / b;
	cout << res << endl;
	return res;
}