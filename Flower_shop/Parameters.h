#pragma once
#include <iostream>
#include <string>

using namespace std;

//параметры цветов
class Parameters 
{
public:
    int Long;
    double Price;
    string Color;
    Parameters() {}
    Parameters(int Long, double Price, string Color)
    {
        this->Long = Long;
        this->Price = Price;
        this->Color = Color;
    }
};