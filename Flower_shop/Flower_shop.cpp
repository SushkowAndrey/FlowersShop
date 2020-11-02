// Написать структуру классов цветочного магазина. Желательно применять наследование.

#include <iostream>
#include <string>
#include <vector>
#include "Interface.h"
#include "Flowers.h"
#include "InputValidation.h"
#include "DataEntry.h"
#include "Fun.h"
#include "ExportInFile.h"
#include "ImportFromFile.h"

using namespace std;

int main()
{
    setlocale (0, "ru");
    system("chcp 1251 > nul");
    Interface interface;

    vector <Flowers> flowers;
   
    string symbol;
    int number;

    do {
        interface.PrintMenu();
        cout << "Введите пункт меню - ";
        cin >> symbol;
        number = CheckingTheSymbol(symbol);
        system("cls");
        switch (number)
        {
        case 1:
            Output(flowers);
        case 2:
            break;
        case 3:
            break;
        case 4:
            flowers=Input(flowers);
            break;
        case 5:
            break;
        case 6:
            ExportToFlowers(flowers, flowers.size());
            break;
        case 7:
            flowers = Input_from_file(flowers);
            break;
        case 0:
            interface.PrintExit();
            break;
        default:
            interface.PrintError("Некорректный выбор меню");
            break;
        }
    } while (number != 0);
}