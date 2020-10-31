#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Flowers.h"
#include "Data_entry.h"
#include "input_validation.h"
#include "Import_from_file.h"

using namespace std;
//ввод данных в вектор в программе
vector <Flowers> Input(vector <Flowers> flowers)
{
    string Sym;
    char Num;
    do
    {
        flowers.push_back(ConsoleInputFlowers());
        cout << "¬нести данные о новом поступлении? (Y/N)" << endl;
        cin >> Sym;
        Num = Checking_the_symbol_Y_N(Sym);
        if (Num == 'N') break;
    } while (Num == 'Y');
    system("cls");
    return flowers;
}
//ввод данных в вектор из файла
vector <Flowers> Input_from_file(vector <Flowers> flowers)
{
    flowers.push_back(ImportFromFile("Flowers.csv"));
    return flowers;
}

//вывод вектора
void Output(vector <Flowers> flowers)
{
    for (auto element : flowers)
    {
        element.Print();
    }
}

