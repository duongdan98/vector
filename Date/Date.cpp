#include "Date.h"
int namNhuan(int nam)
{
	if (nam % 4 == 0 && nam % 100 != 0||nam%400==0)
		return 1;
	return 0;
}
int kiemTra(int ngay, int thang, int nam)
{
	int thg[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (namNhuan(nam) == 1)thg[2]++;
	if (thang < 1 || thang>12) return 0;
	if (ngay > thg[thang] || ngay<1) return 0;
	if (nam < 1000) return 0;
	return 1;
}
void Date::Nhap()
{
	do
	{
		cout << "Nhap ngay,thang,nam" << endl;
		cin >> ngay >> thang >> nam;
		if (kiemTra(ngay, thang, nam) == 0)
			cout << "ngay khong hop le xin kiem tra lai\n";
	} while (kiemTra(ngay, thang, nam) == 0);
}
void Date::HienThi()
{
	if (ngay < 10) cout << "0" << ngay << "/";
	else cout << ngay << "/";
	if (thang < 10)cout << "0" << thang << "/";
	else cout << thang << "/";
	cout << nam << endl;
}
/*void Date::NextDay()
{
	int thg[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31};
	if (namNhuan(nam) == 1)thg[2]++;
	if (ngay < thg[thang]) ngay++;
	else
	{
		ngay = 1;
		thang++;
	}
	if (thang == 13)
	{
		thang = 1;
		nam++;
	}
}
void Date:: PreiousDay()
{
	int thg[] = { 31,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (namNhuan(nam) == 1)thg[2]++;
	if (ngay > 1) ngay--;
	else
	{
		ngay = thg[--thang];
	}
	if (thang == 0)
	{
		thang = 12;
		nam--;
	}
}*/