#pragma once
#include <iostream>
//#include "RF.cpp"
using namespace std;


double SUM(double x, double y);
double RAZN(double x, double y);
double UMN(double x, double y);
double DEL(double x, double y);

double SUM(double x, double y)
{
	double res = x + y;
	cout << res << endl;
	return res;
}

double RAZN(double x, double y)
{
	double res = x - y;
	cout << res << endl;
	return res;
}
double UMN(double x, double y)
{
	double res = x * y;
	cout << res << endl;
	return res;
}
double DEL(double x, double y)
{
	double res = x / y;
	cout << res << endl;
	return res;
}