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
    char k;
    // int res;

   
    cout << "Введите числа которые хотите использовать: " << endl;
    
    cin >> k;
    return 0; //добавил короче чето я Дамир
}