#pragma once
#include <iostream> 
using namespace std;        //����� �� ������ std::

// ______________________������������ ������_________________________

void menu(); // ���� 

double SUM(double x, double y);
double RAZN(double x, double y);
double UMN(double x, double y);
double DEL(double x, double y);

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
