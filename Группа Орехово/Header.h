#pragma once
#include <iostream> 
using namespace std;        //чтобы не писать std::

// ______________________перечисление фунций_________________________

void menu(); // меню 

double SUM(double x, double y);
double RAZN(double x, double y);
double UMN(double x, double y);
double DEL(double x, double y);

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
