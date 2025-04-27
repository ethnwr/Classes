#pragma once
#include <iostream>
using namespace std;
class Point
{
private:
	int* x;
	int y;
	int z;
public:

	Point(int& x1,int y1,int z1)
	{
		*x = x1;
		y = y1;
		z = z1;
	}
	int getX() const
	{
		return *x;
	}
	int getY() const
	{
		return y;
	}
	int getZ() const
	{
		return z;
	}
	
	int setX(const int& newX) 
	{
		return *x = newX;
	}
	int setY(const int& newY)
	{
		return y = newY;
	}
	int setZ(const int& newZ) 
	{
		return z = newZ;
	}

	~Point()
	{
		delete x;
	}
};
