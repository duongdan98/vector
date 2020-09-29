#pragma once
#include<iostream>
using namespace std;
class Date
{
	int ngay, thang, nam;
public:
	static bool NamNhuan(int nam)
	{
		if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0)
			return true;
		return false;
	}
	void Nhap();
	void HienThi();
	/*void NextDay();
	void  PreiousDay();*/
	//xây dựng pt Nhap;
	//phải kt xem ngày nhập có hợp lệ không
	//xây dựng pt HienThi dd/mm/yyyy
	//xây dựng pt NextDay-tăng ngày hiện tại lên 1 đơn vị
	//xây dựng pt PreiousDay-giảm ngày hiện tại đi 1 đơn vị
};

