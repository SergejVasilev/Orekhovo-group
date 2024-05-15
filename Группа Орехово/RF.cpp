#pragma once

#include <iostream>
#include <windows.h>
using namespace std;        //прострнанство имен



double SUM(double x, double y)
{
	setlocale(LC_ALL, "Russian"); //
	SetConsoleCP(1251);           //
	SetConsoleOutputCP(1251);     //3 ñòðîêè äëÿ ðóññêîãî ÿçûêà

	double res = x + y;
	cout << "Ðóçóëüòàò ñëîæåíèÿ " << x << " è " << y << " = " << res << endl;
	cout << "-----------------------------------------" << endl;
	return res;
}
double RAZN(double x, double y)
{
	double res = x - y;
	cout << res << endl;
	cout << "Ðóçóëüòàò âû÷èòàíèÿ " << x << " èç " << y << " = " << res << endl;
	cout << "-----------------------------------------" << endl;
	return res;
}
double UMN(double x, double y)
{
	double res = x * y;
	cout << res << endl;
	cout << "Ðóçóëüòàò óìíîæåíèÿ " << x << " íà " << y << " = " << res << endl;
	cout << "-----------------------------------------" << endl;
	return res;
}
double DEL(double x, double y)
{
	double res = x / y;
	cout << res << endl;
	cout << "Ðóçóëüòàò äåëåíèÿ " << x << " íà " << y << " = " << res << endl;
	cout << "-----------------------------------------" << endl;
	return res;
}
void menu()
{
	cout << "\t|---------------------------|\n"; //âûâîä òåêñòà
	cout << "\t|           Ìåíþ            |\n"; //âûâîä òåêñòà
	cout << "\t|      1- ñëîæåíèå   +      |\n"; //âûâîä òåêñòà
	cout << "\t|      2 - âû÷èòàíèå -      |\n"; //âûâîä òåêñòà
	cout << "\t|      3 - óìíîæåíèå *      |\n"; //âûâîä òåêñòà
	cout << "\t|      4 - äåëåíèå   /      |\n"; //âûâîä òåêñòà
	cout << "\t|      5 - âûõîä            |\n"; //âûâîä òåêñòà
	cout << "\t|---------------------------|\n\n"; //âûâîä òåêñòà
}
