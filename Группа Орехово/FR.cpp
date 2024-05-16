#pragma once
#include <iostream> //подключаем библиотеку ввода -вывода


using namespace std; // подключаем пространства имен

double SUM(double x, double y)//функция сложения
{
	double res = x + y;
	cout << "Результат сложения " << x << " и " << y << " = " << res << endl;
	cout << "-----------------------------------------" << endl;
	return res;
}
double RAZN(double x, double y)//функция вычитания
{
	double res = x - y;
	cout << res << endl;
	cout << "Результат вычитания " << x << " из " << y << " = " << res << endl;
	cout << "-----------------------------------------" << endl;
	return res;
}
double UMN(double x, double y)//функция умножения
{
	double res = x * y;
	cout << res << endl;
	cout << "Результат умножения " << x << " на " << y << " = " << res << endl;
	cout << "-----------------------------------------" << endl;
	return res;
}
double DEL(double x, double y)//функция деления
{
	double res = x / y;
	cout << res << endl;
	cout << "Результат деления " << x << " на " << y << " = " << res << endl;
	cout << "-----------------------------------------" << endl;
	return res;
}

void menu() //функция вывода меню
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