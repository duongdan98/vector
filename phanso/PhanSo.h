#pragma once
#include<iostream>
using namespace std;
class PhanSo
{
	int ts, ms;
public:
	PhanSo(const PhanSo &a)
	{
		ts = a.ts;
		ms = a.ms;
	}
	PhanSo()
	{
		ts = 0;
		ms = 1;
	}
	friend istream& operator>>(istream& i, PhanSo& ps);
	friend ostream& operator<<(ostream& o, PhanSo ps);
	void toiGian();
	PhanSo operator+(PhanSo a);
	PhanSo operator-(PhanSo a);
	PhanSo operator*(PhanSo a);
	PhanSo operator / (PhanSo a);
};

