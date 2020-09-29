#pragma once
#include<iostream>
#include<vector>
using namespace std;
class PhanSo
{
	int ts, ms;
public:
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
	friend bool operator >(PhanSo a,PhanSo b);
	friend bool operator <(PhanSo a, PhanSo b);
	
	PhanSo cong(int x);

};

void Sort(vector<PhanSo>& PS);