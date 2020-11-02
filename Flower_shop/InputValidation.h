#pragma once
#include <iostream>
#include <string>

using namespace std;

int CheckingTheSymbol(string enterSymbols)
{
    if (enterSymbols.size() != 1) return -1; //значения -1 в меню нет, поэтому для отработки цикла switch/case возвращаем для примера число 10
    else {
        int number;
        for (int i = 0; i < enterSymbols.size(); i++)
        {
            number = enterSymbols[i];
        }
        if (number > 47 && number < 56) {
            return number - '0';
        }
        else return -1;
    }
}

int CheckingTheSymbolYN(string enterSymbols)
{
    if (enterSymbols.size() != 1) return ' '; //значения пробел в меню нет, поэтому для отработки цикла switch/case возвращаем для примера число 10
    else {
        int number;
        for (int i = 0; i < enterSymbols.size(); i++)
        {
            number = enterSymbols[i];
        }
        if (number == 89) {
            return 'Y';
        }
        else if (number == 78) {
            return 'N';
        }
        else return -1;
    }
}