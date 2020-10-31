#pragma once

#include <fstream>
#include <string>
#include "Flowers.h"
#include <vector>

using namespace std;


void Export(string file_path, string Informations)
{
	ofstream FileFlowers;
	FileFlowers.open(file_path, ios::app);
	try
	{
		FileFlowers << Informations << endl;
	}
	catch (...)
	{
		cout << "Ошибка записи в файл" << endl;
	}
	FileFlowers.close();
}

void Export_to_flovers(vector <Flowers> flowers, int size)
{
	string Temp;
	for (int i = 0; i < size; i++)
	{
		//формат сохранения: 0-название; 1-назначение; 2-форма; 3-цвет; 4-длинна; 5-температура хранения; 6-влажность хранения; 7-цена
		Temp += flowers[i].GetType() + ";";
		Temp += flowers[i].Getpurpose() + ";";
		Temp += flowers[i].GetFormat() + ";";
		Temp += flowers[i].GetColor() + ";";
		Temp += to_string(flowers[i].GetLong()) + ";";
		Temp += to_string(flowers[i].GetTemperature()) + ";";
		Temp += to_string(flowers[i].GetHumidity()) + ";";
		Temp += to_string(flowers[i].GetPrice()) + "\n";
	
	}
	Export("Flowers.csv", Temp);
}