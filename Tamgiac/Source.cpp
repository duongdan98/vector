#include<iostream>
#include"TamGiac.h"
using namespace std;
int main()
{
	TamGiac tg;
	cin >> tg;
	tg.tinhCacCanh();
	cout << tg;
	if (tg.isTamGiac())
	{
		cout << "la tam giac\n";
		cout << "Dien tich tam giac =" << tg.tinhDienTich()<<endl;
		cout << "chu vi tam giac =" << tg.tinhChuVi()<<endl;
	}
	else
		cout << "khong la tam giac\n";
	return 0;
}