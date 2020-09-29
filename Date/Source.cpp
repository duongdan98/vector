#include"Date.h"
int main()
{
	/*Date d;
	d.Nhap();
	Date d1 = Date(d);
	Date d2;
	d2 = d;
	d.HienThi();
	d1.HienThi();
	d.HienThi();
	d2.HienThi();*/
	cout << (Date::NamNhuan(2000) ? "dung" : "sai");
	return 0;
}