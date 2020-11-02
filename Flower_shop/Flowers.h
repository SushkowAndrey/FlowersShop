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
    string type; //название цветка
    Parameters parameters;
    Purpose purpose;
    Storage storage;

public:
    Flowers() {}
    Flowers(string type, string format, Parameters parameters, Purpose purpose, Storage storage) : Forms (format)
    {
        this->type = type;
        this->parameters = parameters;
        this->purpose = purpose;
        this->storage = storage;
    }
    string GetType()
    {
        return type;
    }
    string Getpurpose()
    {
        return purpose.GetApplication();
    }
    string GetFormat()
    {
        return format;
    }
    string GetColor()
    {
        return parameters.color;
    }
    int GetLong()
    {
        return parameters.longFlowers;
    }
    int GetTemperature()
    {
        return storage.temperature;
    }
    int GetHumidity()
    {
        return storage.humidity;
    }
    double GetPrice()
    {
        return parameters.price;
    }
};