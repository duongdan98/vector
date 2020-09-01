#pragma once
#include<iostream>
using namespace std;
class Time
{
	int gio, phut, giay;
public:
	Time();
	Time(int g, int p, int gi);
	
	void HienThi();
	//cộng giữa 2 dữ liệu thời gian
	Time cong(Time x);
	friend Time Cong(Time t1, Time t2);
	//cộng thời gian với 1 số int giây;xây dựng cả 2 kiểu coojgn theo 2 cách thuộc tính và hàm bạn
	Time cong(int giay);
	friend Time Cong(Time t, int giay);
};

