#pragma once
#include <iostream> 
//#include "RF.cpp" 

using namespace std;        //������������ ����

// ______________________������������ ������_________________________

void menu(); // ���� 

double SUM(double x, double y);
double RAZN(double x, double y);
double UMN(double x, double y);
double DEL(double x, double y);

double SUM(double x, double y)
{
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