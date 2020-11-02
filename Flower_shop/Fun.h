#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Flowers.h"
#include "DataEntry.h"
#include "InputValidation.h"
#include "ImportFromFile.h"

using namespace std;

//вывод данных о цветке
void Print(Flowers flowers)
{
    cout << "Наименование цветка " << flowers.GetType() << endl;
    cout << "Назначение цветка  - " << flowers.Getpurpose() << endl;
    cout << "Форма цветка - " << flowers.GetFormat() << endl;
    cout << "Цвет цветка - " << flowers.GetColor() << endl;
    cout << "Длинна цветка в см. - " << flowers.GetLong() << endl;
    cout << "Температура хранения в град. С - " << flowers.GetTemperature() << endl;
    cout << "Влажность хранения, % - " << flowers.GetHumidity() << endl;
    cout << "Цена готового цветка в руб. - " << flowers.GetPrice() << endl;
}

//ввод данных в вектор в программе
vector <Flowers> Input(vector <Flowers> flowers)
{
    string symbol;
    char letter;
    do
    {
        flowers.push_back(ConsoleInputFlowers());
        cout << "Внести данные о новом поступлении? (Y/N)" << endl;
        cin >> symbol;
        letter = CheckingTheSymbolYN(symbol);
        if (letter == 'N') break;
    } while (letter == 'Y');
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
        Print(element);
        cout << "_______________________________" << endl;
    }
}