#include <iostream>         //
#include <windows.h>        //подключение библиотек
#include "Header.h"
//#include "RF.cpp"

using namespace std;        //чтобы не писать std::

int main()
{
    setlocale(LC_ALL, "Russian"); //
    SetConsoleCP(1251);           //
    SetConsoleOutputCP(1251);     //3 строки для русского языка

    //double a = 0;
    //double b = 0;
    char s = 0;
    //cin >> a;//первое чесло 
    //cin >> b;//второе чесло чесло  
    //cin >> s;//что вы хотите сделать
    cout << "|-------------------------|\n"; //вывод текста
    cout << "|           Меню          |\n"; //вывод текста
    cout << "|      1 - сложение +     |\n"; //вывод текста
    cout << "|     2  - вычитание -    |\n"; //вывод текста
    cout << "|     3  - умножение *    |\n"; //вывод текста
    cout << "|      4 - деление /      |\n"; //вывод текста
    cout << "|-------------------------|\n"; //вывод текста
    
    switch (s)
    {
    case '1':

        break;
    case '2':

        break;
    case '3':

        break;
    case '4':

        break;
    default:
        cout << "\n вы вели не известную команду\n";
    }

   


    return 0; //добавил короче чето я Дамир
}