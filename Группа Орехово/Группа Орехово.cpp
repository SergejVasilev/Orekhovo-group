#include <iostream>
#include <windows.h>        // Подключение библеотеку ввода - вывода

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");   // подключение русского языка

    std::cout << "Hello World!\n";
    cout << "всем хай от Таня.И.А" << endl; //мой комент
    cout << "Привет!!!!  Еремеев С.Н." << endl; //мой комент
    cout << "Всем привет, от Артёма П." << endl; //мой комент

    int a = 150;
    int b = 200;
    int res;

    int k;
    int k = a + b;
    int k = a * b;
    int k = a / b;
    cout << "Введите числа которые хотите использовать: " << endl;
    cin >> k;
    return 0; //добавил короче чето я Дамир
}