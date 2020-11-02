#pragma once
#include <iostream>
#include <string>

using namespace std;
//хранение цветов
class Storage    //хранение
{
public:
    double temperature;
    double humidity; //влажность
    Storage() {}
    Storage(double temperature, double humidity)
    {
        this->temperature = temperature;
        this->humidity = humidity;
    }

};