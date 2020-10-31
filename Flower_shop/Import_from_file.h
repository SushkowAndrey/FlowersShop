#pragma once

#include <fstream>
#include <string>
#include <vector>
#include "Flowers.h"


using namespace std;

Flowers ImportFromFile(string file_path) {
	ifstream File;
	string Temp;
	vector <string> NewTemp;
	int pos;
	try
	{
		File.open(file_path, ios::in);
		while (!File.eof())
		{
			File >> Temp;
			for (int i = 0; i < Temp.size(); i++)
			{
				pos = Temp.find(";");
				NewTemp.push_back(Temp.substr(0, pos));
				Temp = Temp.substr(pos + 1);
			}
		}
		File.close();
	}
	catch (...)
	{
		cout << "‘айл не открыт" << endl;
	}
	//формат сохранени¤: 0-название; 1-назначение; 2-форма; 3-цвет; 4-длинна; 5-температура хранени¤; 6-влажность хранени¤; 7-цена
	string Type= NewTemp[0], Application = NewTemp[1], Format = NewTemp[2], Color=NewTemp[3];
	int Long = stoi(NewTemp[4]);
	double Temperature = stoi(NewTemp[5]);
	double Humidity = stoi(NewTemp[6]);
	double Price = stoi(NewTemp[7]);


	Storage storage(Temperature, Humidity);
	Purpose purpose(Application);
	Parameters parameters(Long, Price, Color);
	Flowers flowers(Type, Format, parameters, purpose, storage);
	return flowers;


}