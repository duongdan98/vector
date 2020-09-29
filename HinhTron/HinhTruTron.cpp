#include "HinhTruTron.h"
void HinhTruTron::xuat()
{
	cout << "ban kinh day cua hinh tru = " << r<<endl;
	cout << "chieu cao hinh tru = " << h<<endl;
	cout << "dien tich toan phan cua hinh tru = " << tinhDienTich()<<endl;
	cout << "the tinh cua hinh tru = " << tinhTheTich()<<endl;
}
void HinhTruTron::nhap()
{
	HinhTron::nhap();
	cout << "nhap vao chieu cao hinh tru h = ";
	cin >> h;
}
float HinhTruTron::tinhDienTich()
{
	return 2 * 3.14 * r * h+2*3.14*r*r;
}
float HinhTruTron::tinhTheTich()
{
	return 3.14 * r * r * h;
}
