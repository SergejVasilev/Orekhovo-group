﻿#include <iostream>         //
#include <windows.h>        //подключение библиотек
#include "Header.h"
//#include "RF.cpp"

using namespace std;        //чтобы не писать std::

int main()
{
    setlocale(LC_ALL, "Russian"); //
    SetConsoleCP(1251);           //
    SetConsoleOutputCP(1251);     //3 строки для русского языка

    cout << "|-------------------------|\n"; //вывод текста
    cout << "|           Меню          |\n"; //вывод текста
    cout << "|      1 - сложение +     |\n"; //вывод текста
    cout << "|     2  - вычитание -    |\n"; //вывод текста
    cout << "|     3  - умножение *    |\n"; //вывод текста
    cout << "|      4 - деление /      |\n"; //вывод текста
    cout << "|-------------------------|\n"; //вывод текста
    
    double a = 0;
    double b = 0;
    char s = 0;
    cin >> a;//первое число 
    cin >> b;//второе чесло число  
    cin >> s;//что вы хотите сделать

    switch (s)
    {
    case '1':
        SUM(a, b);
        break;
    case '2':
        RAZN(a, b);
        break;
    case '3':
        UMN(a, b);
        break;
    case '4':
        DEL(a, b);
        break;
    default:
        cout << "\n  Вы ввели НЕВЕРНЫЕ ДАННЫЕ! \n";
        cout << "\n      Вы виноваты сами! \n";
        cout << "\n|---------------------------| \n";

        return 0; //завершение функции
    }



    return 0; //добавил короче чето я Дамир
}