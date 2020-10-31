#pragma once
#include <iostream>
#include <string>
#include "Forms.h"
#include "Parameters.h"
#include "Purpose.h"
#include "Storage.h"

using namespace std;

//класс Цветы
class Flowers : public Forms
{
private:
    string Type; //название цветка
    Parameters parameters;
    Purpose purpose;
    Storage storage;

public:
    Flowers() {}
    Flowers(string Type, string Format, Parameters parameters, Purpose purpose, Storage storage) : Forms (Format)
    {
        this->Type = Type;
        this->parameters = parameters;
        this->purpose = purpose;
        this->storage = storage;
    }
    void Print()
    {
        cout << "Наименование цветка " << Type << endl;
        cout << "Назначение цветка  - " << purpose.GetApplication() << endl;
        cout << "Форма цветка - " << Format << endl;
        cout << "Цвет цветка - " << parameters.Color << endl;
        cout << "Длинна цветка в см. - " << parameters.Long << endl;
        cout << "Температура хранения в град. С - " << storage.Temperature << endl;
        cout << "Влажность хранения, % - " << storage.Humidity << endl;
        cout << "Цена готового цветка в руб. - " << parameters.Price << endl;
    }
    string GetType()
    {
        return Type;
    }
    string Getpurpose()
    {
        return purpose.GetApplication();
    }
    string GetFormat()
    {
        return Format;
    }
    string GetColor()
    {
        return parameters.Color;
    }
    int GetLong()
    {
        return parameters.Long;
    }
    int GetTemperature()
    {
        return storage.Temperature;
    }
    int GetHumidity()
    {
        return storage.Humidity;
    }
    double GetPrice()
    {
        return parameters.Price;
    }

};