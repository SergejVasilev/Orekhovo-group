﻿#include <iostream>         //
#include <windows.h>        //подключение библиотек
#include "Header.h"
//#include "RF.cpp"

using namespace std;        //чтобы не писать std::

int main() //все тут
{
    setlocale(LC_ALL, "Russian"); //
    SetConsoleCP(1251);           //
    SetConsoleOutputCP(1251);     //3 строки для русского языка

    HANDLE h; //для цвета
    h = GetStdHandle(STD_OUTPUT_HANDLE); //для цвета
    SetConsoleTextAttribute(h, 14); //изменение цвета

    cout << "\tЭто программа - калькулятор " << endl << endl; //вывод текста/Еремеев Сергей)

    menu(); // вызов меню. Автор Дамир

    while (true) //цикл
    {
        double a = 0; //инициализация переменной
        double b = 0; //инициализация переменной
        char s = 0; //инициализация переменной

        SetConsoleTextAttribute(h, 13); //изменение цвета
        cout << "\n"; //отступ
        cout << "\n"; //отступ
        cout << "Введите первое число: "; //вывод текста
        cin >> a; //первое число 

        SetConsoleTextAttribute(h, 13); //изменение цвета

        cout << "Введите второе число: "; //вывод текста
        cin >> b; //второе число 

        SetConsoleTextAttribute(h, 13); //изменение цвета

        cout << "Выберите оперцию представленную в меню: "; //вывод текста
        cin >> s; //что вы хотите сделать

        cout << "\n"; //отступ
        SetConsoleTextAttribute(h, 12); //изменение цвета

        switch (s) //функция выбора
        {
        case '1': //если выбрал 1
            cout << "Ответ: "; //вывод текста
            SUM(a, b); //процесс складывания
            break; //прерывание функции

        case '2': //если выбрал 2
            cout << "Ответ: "; //вывод текста
            RAZN(a, b); //процесс разности
            break; //прерывание функции

        case '3': //если выбрал 3
            cout << "Ответ: "; //вывод текста
            UMN(a, b); //процесс умножения
            break; //прерывание функции

        case '4': //если выбрал 4
            cout << "Ответ: "; //вывод текста
            DEL(a, b); //процесс деления
            break; //прерывание функции
        case '5': //если выбрал 4

            cout << "Ну пока: "; //вывод текста
            SetConsoleTextAttribute(h, 15); //изменение цвета
            return 0; //завершение функции

            break; //прерывание функции

        default: //некоректный ввод
            SetConsoleTextAttribute(h, 10); //изменение цвета

            cout << "\n\t|---------------------------|";   //вывод текста
            cout << "\n\t| Вы ввели НЕВЕРНЫЕ ДАННЫЕ! |";   //вывод текста
            cout << "\n\t|     Вы виноваты сами!     |";   //вывод текста
            cout << "\n\t|---------------------------|\n"; //вывод текста
            SetConsoleTextAttribute(h, 15); //изменение цвета
            return 0; //завершение функции
        }   
    }

    SetConsoleTextAttribute(h, 15); //изменение цвета
    return 0; //завершение функции
}