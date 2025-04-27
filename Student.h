#pragma once
#include <iostream>

using namespace std;
class Student
{
private:
	string* name;
	int age;
	string surname;
	int id;
public:

	Student(string& n,int a,string s,int i)
	{
		*name = *n;
		age = a;
		surname = s;
		id = i;
	}
	string getName() const 
	{
		return *name;
	}
	int getAge() const 
	{
		return age;
	}
	string getSurname() const
	{
		return surname;
	}
	int getId() const
	{
		return id;
	}

	string setName(const string& newName)
	{
		return *name = newName;
	}
	int setAge(const int& newAge)
	{
		return age = newAge;
	}
	string setSurname(const string& newSurname)
	{
		return surname = newSurname;
	}
	int setId(const int& newId)
	{
		return id = newId;
	}
	
	~Student()
	{
		delete name;
	}
};
