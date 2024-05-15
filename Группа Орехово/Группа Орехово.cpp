#include <iostream>         //
#include <windows.h>        //подключение библиотек
#include "Header.h"
using namespace std;        //чтобы не писать std::

int main()
{
    setlocale(LC_ALL, "Russian"); //
    SetConsoleCP(1251);           //
    SetConsoleOutputCP(1251);     //3 строки для русского языка

    std::cout << "Hello World!\n";
    cout << "всем хай от Таня.И.А" << endl; //мой комент
    cout << "Привет!!!!  Еремеев С.Н." << endl; //мой комент
    cout << "Всем привет, от Артёма П." << endl; //мой комент

    int a = 150;
    int b = 200;
    int res;

    int k;
    cout << "Введите числа которые хотите использовать: " << endl;
    cin >> k;
    return 0; //добавил короче чето я Дамир
}