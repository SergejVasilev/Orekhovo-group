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
    

    cout << "|---------------------------|\n"; //вывод текста
    cout << "|           Меню            |\n"; //вывод текста
    cout << "|       1- сложение +       |\n"; //вывод текста
    cout << "|      2 - вычитание -      |\n"; //вывод текста
    cout << "|      3 - умножение *      |\n"; //вывод текста
    cout << "|       4 - деление /       |\n"; //вывод текста
    cout << "|---------------------------|\n\n"; //вывод текста
 
    while(1){
        double a = 0; //инициализация переменной
        double b = 0; //инициализация переменной
        char s = 0; //инициализация переменной
    
        cout << "Введите первое число: "; //вывод текста
        cin >> a; //первое число 

        cout << "Введите второе число: "; //вывод текста
        cin >> b; //второе число 

        cout << "Выберите оперцию представленную в меню: "; //вывод текста
        cin >> s; //что вы хотите сделать
   
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
            cout << "\n| Вы ввели НЕВЕРНЫЕ ДАННЫЕ! |";     //вывод текста
            cout << "\n|     Вы виноваты сами!     |";         //вывод текста
            cout << "\n|---------------------------|\n";   //вывод текста
            return 0; //добавил короче чето я Дамир
           
        }
    }
    return 0; //добавил короче чето я Дамир
}