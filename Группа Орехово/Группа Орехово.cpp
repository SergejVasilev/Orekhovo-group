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

<<<<<<< HEAD
    cout << "Введите число 1: " << endl;
    cout << "Введите число 2: " << endl;
    cout << "введите знак: +|-|*|/ " << endl;
    

   
=======
    cout << "|-------------------------|\n"; //вывод текста
    cout << "|           Меню          |\n"; //вывод текста
    cout << "|      1 - сложение +     |\n"; //вывод текста
    cout << "|     2  - вычитание -    |\n"; //вывод текста
    cout << "|     3  - умножение *    |\n"; //вывод текста
    cout << "|      4 - деление /      |\n"; //вывод текста
    cout << "|-------------------------|\n"; //вывод текста
>>>>>>> 909a974ee6a0affad990c79bb9493397b1dfe92d

    


    return 0; //добавил короче чето я Дамир
}