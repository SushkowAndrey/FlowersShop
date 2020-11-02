#pragma once
#include <iostream>
#include <string>

using namespace std;

class Purpose  //назначение (подарок, домашний цветок)
{
private:
    string application;
public:
    Purpose() {}
    Purpose(string application)
    {
        this->application = application;
    }
    string GetApplication()
    {
        return application;
    }
};