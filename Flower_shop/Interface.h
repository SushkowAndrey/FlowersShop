#pragma once
#include <iostream>
#include <string>

using namespace std;

class Interface
{
public:
    void PrintWelcome()
    {
        cout << "============================" << endl;
        cout << "==== Цветочный магазин =====" << endl;
        cout << "============================" << endl;
        cout << endl;
    }
    void PrintMenu()
    {
        cout << "+++++++++++++++++++++++++++" << endl;
        cout << "Меню:" << endl;
        cout << "1. Посмотреть весь перечень цветов" << endl;
        cout << "2. Посмотреть проданные цветы" << endl;
        cout << "3. Посмотреть остаток цветов" << endl;
        cout << "4. Добавить цветы" << endl;
        cout << "5. Продать цветок" << endl;
        cout << "6. Экспорт в файл" << endl;
        cout << "7. Импорт из файла" << endl;
        cout << "0. Выход" << endl;
        cout << "+++++++++++++++++++++++++++" << endl;
    }
    void PrintError(string message)
    {
        cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
        cout << "!!!!!!!!!! E R R O R !!!!!!!!!!" << endl;
        cout << "!!! " << message << " !!!" << endl;
        cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
        cout << endl;
    }
    void PrintExit()
    {
        cout << endl;
        cout << "-----------------" << endl;
        cout << "--- Good byе! ---" << endl;
        cout << "-----------------" << endl;
        cout << endl;
    }

};