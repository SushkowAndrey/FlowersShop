#pragma once
#include <iostream>
#include <string>

using namespace std;

class Purpose  //назначение (подарок, домашний цветок)
{
private:
    string Application;
public:
    Purpose() {}
    Purpose(string Application)
    {
        this->Application = Application;
    }
    string GetApplication()
    {
        return Application;
    }
};