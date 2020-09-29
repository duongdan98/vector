#include "HinhTron.h"
void HinhTron::nhap()
{
	cout << "nhap vao ban kinh r= ";
	cin >> r;
}
void HinhTron::xuat()
{
	cout << "hinh tron co ban kinh = " << r<<endl;
	cout << "hinh tron co chu vi = " << tinhChuVi()<<endl;
	cout << "hinh tron co dien tich = " << tinhDienTich()<<endl;
}
float HinhTron::tinhChuVi()
{
	return 2 * 3.14 * r;
}
float HinhTron::tinhDienTich()
{
	return 3.14 * r * r;
}
