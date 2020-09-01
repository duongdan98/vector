#include "Time.h"
Time::Time()
{
	gio = phut = giay = 0;
}
Time::Time(int g, int p, int gi)
{
	gio = g;
	phut = p;
	giay = gi;
}
void Time::HienThi()
{
	if (gio < 10)
	{
		cout << "0" << gio<<" : ";
	}
	else
		cout << gio << " : ";
	if (phut < 10)
	{
		cout << "0" << phut << " : ";
	}
	else
		cout << phut << " : ";
	if (giay < 10)
	{
		cout << "0" << giay;
	}
	else
		cout << giay;
	cout << endl;
}
Time Time::cong(Time x)
{
	Time temp;
	temp.gio = gio + x.gio;
	temp.phut = phut + x.phut;
	temp.giay = giay + x.giay;
	if (temp.giay >= 60)
	{
		temp.giay -= 60;
		temp.phut++;
	}
	if (temp.phut >= 60)
	{
		temp.phut -= 60;
		temp.gio++;
	}
	if (temp.gio >= 24)
	{
		temp.gio -= 24;
	}
	return temp;
}
Time Cong(Time t1, Time t2)
{
	Time temp;
	temp.gio = t1.gio + t2.gio;
	temp.phut = t1.phut + t2.phut;
	temp.giay = t1.giay + t2.giay;
	if (temp.giay >= 60)
	{
		temp.giay -= 60;
		temp.phut++;
	}
	if (temp.phut >= 60)
	{
		temp.phut -= 60;
		temp.gio++;
	}
	if (temp.gio >= 24)
	{
		temp.gio -= 24;
	}
	return temp;
 }
Time Time::cong(int giay)
{
	Time temp;
	temp.giay =this->giay+ giay;
	temp.phut = phut;
	temp.gio = gio;
	if (temp.giay >= 60)
	{
		temp.phut += temp.giay / 60;
		temp.giay = temp.giay % 60;
	}
	if (temp.phut >= 60)
	{
		temp.gio += temp.phut / 60;
		temp.phut = temp.phut % 60;
	}
	if (temp.gio >= 24)
	{
		temp.gio %= 24;
	}
	return temp;
}
Time Cong(Time t, int giay)
{
	Time temp;
	temp.giay = t.giay + giay;
	temp.phut = t.phut;
	temp.gio = t.gio;
	if (temp.giay >= 60)
	{
		temp.phut += temp.giay / 60;
		temp.giay = temp.giay % 60;
	}
	if (temp.phut >= 60)
	{
		temp.gio += temp.phut / 60;
		temp.phut = temp.phut % 60;
	}
	if (temp.gio >= 24)
	{
		temp.gio %= 24;
	}
	return temp;

 }
