#pragma once
#include <iostream>
#include <string>

using namespace std;

//параметры цветов
class Parameters 
{
public:
    int longFlowers;
    double price;
    string color;
    Parameters() {}
    Parameters(int longFlowers, double price, string color)
    {
        this->longFlowers = longFlowers;
        this->price = price;
        this->color = color;
    }
};