#pragma once

#include <iostream>
#include <windows.h>
using namespace std;        //����� �� ������ std::



double SUM(double x, double y)
{
	setlocale(LC_ALL, "Russian"); //
	SetConsoleCP(1251);           //
	SetConsoleOutputCP(1251);     //3 ������ ��� �������� �����

	double res = x + y;
	cout << "��������� �������� " << x << " � " << y << " = " << res << endl;
	cout << "-----------------------------------------" << endl;
	return res;
}
double RAZN(double x, double y)
{
	double res = x - y;
	cout << res << endl;
	cout << "��������� ��������� " << x << " �� " << y << " = " << res << endl;
	cout << "-----------------------------------------" << endl;
	return res;
}
double UMN(double x, double y)
{
	double res = x * y;
	cout << res << endl;
	cout << "��������� ��������� " << x << " �� " << y << " = " << res << endl;
	cout << "-----------------------------------------" << endl;
	return res;
}
double DEL(double x, double y)
{
	double res = x / y;
	cout << res << endl;
	cout << "��������� ������� " << x << " �� " << y << " = " << res << endl;
	cout << "-----------------------------------------" << endl;
	return res;
}
void menu()
{
	cout << "\t|---------------------------|\n"; //����� ������
	cout << "\t|           ����            |\n"; //����� ������
	cout << "\t|      1- ��������   +      |\n"; //����� ������
	cout << "\t|      2 - ��������� -      |\n"; //����� ������
	cout << "\t|      3 - ��������� *      |\n"; //����� ������
	cout << "\t|      4 - �������   /      |\n"; //����� ������
	cout << "\t|      5 - �����            |\n"; //����� ������
	cout << "\t|---------------------------|\n\n"; //����� ������
}