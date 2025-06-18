#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include "module1.h"
#include "module2.h"
#include "module3.h"
using namespace std;
int main()
{
    int i = 0;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    while (i != 4)
    {
        cout << endl << "1-ввод данных\n";
        cout << "2-поиск по условию\n";
        cout << "3-сохранение\n";
        cout << "4-выход" << endl;
        cin >> i;
        switch (i)
        {
        case 1:
            enter();
            break;
        case 2:
            find();
            break;
        case 3:
            save();
            break;
        case 4:
            cout << "Выход..." << endl;
            break;
        default:
            cout << "Неверный номер!" << endl;
            break;
        }
    }
    system("pause");
    return 0;
}