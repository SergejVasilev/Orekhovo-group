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

    cout << "\t|---------------------------|\n"; //вывод текста
    cout << "\t|           Меню            |\n"; //вывод текста
    cout << "\t|       1- сложение +       |\n"; //вывод текста
    cout << "\t|      2 - вычитание -      |\n"; //вывод текста
    cout << "\t|      3 - умножение *      |\n"; //вывод текста
    cout << "\t|       4 - деление /       |\n"; //вывод текста
    cout << "\t|---------------------------|\n\n"; //вывод текста
    
    double a = 0; //инициализация переменной
    double b = 0; //инициализация переменной
    char s = 0; //инициализация переменной

    cout << "Введите первое число: "; //вывод текста
    cin >> a; //первое число 

    cout << "Введите второе число: "; //вывод текста
    cin >> b; //второе число 

    cout << "Выберите оперцию представленную в меню: "; //вывод текста
    cin >> s; //что вы хотите сделать

    cout << "\n"; //отступ
        
    switch (s)
    {
    case '1':
        cout << "Ответ: ";
        SUM(a, b);
        break;

    case '2':
        cout << "Ответ: ";
        RAZN(a, b);
        break;

    case '3':
        cout << "Ответ: ";
        UMN(a, b);
        break;

    case '4':
        cout << "Ответ: ";
        DEL(a, b);
        break;

    default:
        cout << "\n\t|---------------------------|";   //вывод текста
        cout << "\n\t| Вы ввели НЕВЕРНЫЕ ДАННЫЕ! |";     //вывод текста
        cout << "\n\t|     Вы виноваты сами!     |";         //вывод текста
        cout << "\n\t|---------------------------|\n";   //вывод текста

        return 0; //завершение функции
    }

    return 0; //добавил короче чето я Дамир
}