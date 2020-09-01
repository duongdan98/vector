#pragma once
#include<iostream>
using namespace std;
class ToaDo
{
	int x, y;
public:
	friend class TamGiac;
	friend istream& operator>> (istream& i, ToaDo& sv);
	friend ostream& operator <<(ostream& o, ToaDo sv);
	void setX(int x);
	int getX();
	void setY(int);
	int getY();
};

