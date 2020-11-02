#pragma once
#include <iostream>
#include <string>

using namespace std;

class Forms  //форма (букет, комнатный)
{
protected:
    string format;
public:
    Forms() {}
    Forms(string format)
    {
        this->format = format;
    }
};