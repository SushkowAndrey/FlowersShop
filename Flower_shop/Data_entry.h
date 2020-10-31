#pragma once
#pragma once
#include <iostream>
#include <string>
#include "Flowers.h"


using namespace std;

Flowers ConsoleInputFlowers()
{
    string Type, Application, Color, Format;
    double Temperature;
    double Humidity;
    int Long;
    double Price;

    cout << "Введите название цветка - "; cin >> Type;
    cout << "Введите назначение цветка - "; cin >> Application;
    cout << "Введите форму цветка - "; cin >> Format;
    cout << "Введите цвет цветка - "; cin >> Color;
    cout << "Введите длинну цветка в см. - "; cin >> Long;
    cout << "Введите температуру хранения в град. С - "; cin >> Temperature;
    cout << "Введите влажность хранения, % - "; cin >> Humidity;
    cout << "Введите цену готового цветка в руб. - "; cin >> Price;
    Storage storage(Temperature, Humidity);
    Purpose purpose(Application);
    Parameters parameters(Long, Price, Color);
    Flowers flowers(Type, Format, parameters, purpose, storage);
    return flowers;
    

}