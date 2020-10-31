#pragma once
#include <iostream>
#include <string>

using namespace std;

class Forms  //форма (букет, комнатный)
{
protected:
    string Format;
public:
    Forms() {}
    Forms(string Format)
    {
        this->Format = Format;
    }
};