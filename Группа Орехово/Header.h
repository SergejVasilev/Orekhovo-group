#pragma once
#include <iostream> 
//#include "RF.cpp" 

using namespace std;        //пространство имен

// ______________________перечисление фунций_________________________

void menu(); // меню 

double SUM(double x, double y);
double RAZN(double x, double y);
double UMN(double x, double y);
double DEL(double x, double y);

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

void menu()
{
	cout << "\t|---------------------------|\n"; //вывод текста
	cout << "\t|           Меню            |\n"; //вывод текста
	cout << "\t|      1- сложение   +      |\n"; //вывод текста
	cout << "\t|      2 - вычитание -      |\n"; //вывод текста
	cout << "\t|      3 - умножение *      |\n"; //вывод текста
	cout << "\t|      4 - деление   /      |\n"; //вывод текста
	cout << "\t|      5 - выход            |\n"; //вывод текста
	cout << "\t|---------------------------|\n\n"; //вывод текста

}