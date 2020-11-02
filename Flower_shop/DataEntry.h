#pragma once
#pragma once
#include <iostream>
#include <string>
#include "Flowers.h"

using namespace std;

Flowers ConsoleInputFlowers()
{
    string type, application, color, format;
    double temperature, humidity, price;
    int longFlowers;

    cout << "Введите название цветка - "; cin >> type;
    cout << "Введите назначение цветка - "; cin >> application;
    cout << "Введите форму цветка - "; cin >> format;
    cout << "Введите цвет цветка - "; cin >> color;
    cout << "Введите длинну цветка в см. - "; cin >> longFlowers;
    cout << "Введите температуру хранения в град. С - "; cin >> temperature;
    cout << "Введите влажность хранения, % - "; cin >> humidity;
    cout << "Введите цену готового цветка в руб. - "; cin >> price;
    Storage storage(temperature, humidity);
    Purpose purpose(application);
    Parameters parameters(longFlowers, price, color);
    Flowers flowers(type, format, parameters, purpose, storage);
    return flowers;
   
}