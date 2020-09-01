#pragma once
#include<string>
#include<iostream>
using namespace std;
class SinhVien
{
	string hoTen;
	int id;
	float diemToan, diemLy, diemHoa;
	//float diemTB = (diemToan + diemHoa + diemLy) / 3;
public:
	friend istream& operator>> (istream& i, SinhVien& sv);
	friend ostream& operator <<(ostream& o, SinhVien sv);
	float diemTB();
};

