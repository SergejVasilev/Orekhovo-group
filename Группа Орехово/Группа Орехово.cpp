#include <iostream>         //
#include <windows.h>        //подключение библиотек
#include "Header.h"

using namespace std;        //чтобы не писать std::

int main()
{
    setlocale(LC_ALL, "Russian"); //
    SetConsoleCP(1251);           //
    SetConsoleOutputCP(1251);     //3 строки для русского языка

    int a = 150;
    int b = 200;

    cout << "|-------------------------|\n"; //вывод текста
    cout << "|           Меню          |\n"; //вывод текста
    cout << "|      1 - сложение +     |\n"; //вывод текста
    cout << "|     2  - вычитание -    |\n"; //вывод текста
    cout << "|     3  - умножение *    |\n"; //вывод текста
    cout << "|      4 - деление /      |\n"; //вывод текста
    cout << "|-------------------------|\n"; //вывод текста

    


    return 0; //добавил короче чето я Дамир
}