#pragma once

#include <fstream>
#include <string>
#include <vector>
#include "Flowers.h"

using namespace std;

Flowers ImportFromFile(string file_path) {
	ifstream File;
	string temp;
	vector <string> NewTemp;
	int position;
	try
	{
		File.open(file_path, ios::in);
		while (!File.eof())
		{
			File >> temp;
			for (int i = 0; i < temp.size(); i++)
			{
				position = temp.find(";");
				NewTemp.push_back(temp.substr(0, position));
				temp = temp.substr(position + 1);
			}
		}
		File.close();
	}
	catch (...)
	{
		cout << "Файл не открыт" << endl;
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