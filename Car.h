#pragma once
#include <iostream>
using namespace std;
class Car
{
private:
	int* enginePower;
	string color;
	int length;
public:
	
	Car(int& enginePower1, string color1, int length1)
	{
		*enginePower = enginePower1;
	}

	int getEnginePower() const
	{
		return *enginePower;
	}
	string getColor() const
	{
		return color;
	}
	int getLength() const
	{
		return length;
	}


	int setEnginePower(const int& newEnginePower) 
	{
		return *enginePower = newEnginePower;
	}
	string setColor(const int& newColor) 
	{
		return color = newColor;
	}
	int setLength(const int& newLength) 
	{
		return length = newLength;
	}

	~Car()
	{
		delete enginePower;
	}
};
