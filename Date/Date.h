#pragma once
#include<iostream>
using namespace std;
class Date
{
	int ngay, thang, nam;
public:
	Date()
	{

	}
	Date(const Date& d)
	{
		ngay = ngay + 1;
		thang += 1;
		nam+=1;
	}
	void Nhap();
	void HienThi();
	void NextDay();
	void  PreiousDay();
	//xây dựng pt Nhap;
	//phải kt xem ngày nhập có hợp lệ không
	//xây dựng pt HienThi dd/mm/yyyy
	//xây dựng pt NextDay-tăng ngày hiện tại lên 1 đơn vị
	//xây dựng pt PreiousDay-giảm ngày hiện tại đi 1 đơn vị
};

