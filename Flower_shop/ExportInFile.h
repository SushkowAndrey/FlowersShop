#pragma once

#include <fstream>
#include <string>
#include "Flowers.h"
#include <vector>

using namespace std;

void Export(string file_path, string informations)
{
	ofstream FileFlowers;
	FileFlowers.open(file_path, ios::app);
	try
	{
		FileFlowers << informations << endl;
	}
	catch (...)
	{
		cout << "Ошибка записи в файл" << endl;
	}
	FileFlowers.close();
}

void ExportToFlowers(vector <Flowers> flowers, int size)
{
	string temp;
	for (int i = 0; i < size; i++)
	{
		//формат сохранения: 0-название; 1-назначение; 2-форма; 3-цвет; 4-длинна; 5-температура хранения; 6-влажность хранения; 7-цена
		temp += flowers[i].GetType() + ";";
		temp += flowers[i].Getpurpose() + ";";
		temp += flowers[i].GetFormat() + ";";
		temp += flowers[i].GetColor() + ";";
		temp += to_string(flowers[i].GetLong()) + ";";
		temp += to_string(flowers[i].GetTemperature()) + ";";
		temp += to_string(flowers[i].GetHumidity()) + ";";
		temp += to_string(flowers[i].GetPrice()) + "\n";
	}
	Export("Flowers.csv", temp);
}