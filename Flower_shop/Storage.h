#pragma once
#include <iostream>
#include <string>

using namespace std;
//хранение цветов
class Storage    //хранение
{
public:
    double Temperature;
    double Humidity; //влажность
    Storage() {}
    Storage(double Temperature, double Humidity)
    {
        this->Temperature = Temperature;
        this->Humidity = Humidity;
    }

};