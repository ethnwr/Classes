#pragma once
#include <iostream>
using namespace std;
class Fraction
{
private:
	int* a;
	int b;
public:
	Fraction(int& a1,int b1)
	{
		*a = a1;
		b = b1;
	}

	int getA() const
	{
		return *a;
	}
	int getB() const
	{
		return b;
	}

	int setA(const int& newA)
	{
		return *a = newA;
	}
	int setB(const int& newB)
	{
		return b = newB;
	}

	~Fraction()
	{
		delete a;
	}
};
