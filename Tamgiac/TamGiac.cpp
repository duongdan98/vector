#include "TamGiac.h"
#include <math.h>
istream& operator>> (istream& i, TamGiac& tg)
{
	i >> tg.a >> tg.b >> tg.c;
	return i;
 }
ostream& operator <<(ostream& o, TamGiac tg) {
	cout << "toa do tam giac 3 diem la" << endl;
	o << tg.a << endl;
	o << tg.b << endl;
	o << tg.c << endl;
	o << "AB= " << tg.AB<<endl;
	o << "AC= " << tg.AC<<endl;
	o << "BC= " << tg.BC<<endl;
	return o;
}
void TamGiac::setA(ToaDo a)
{
	this->a = a;
}
void TamGiac::setB(ToaDo a)
{
	this->b = a;
}
void TamGiac::setC(ToaDo a)
{
	this->c = a;
}
ToaDo TamGiac::getA()
{
	return a;
}
ToaDo TamGiac::getB()
{
	return b;
}
ToaDo TamGiac::getC()
{
	return c;
}
float kc(ToaDo a, ToaDo b)
{
	return sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2));
}
void TamGiac::tinhCacCanh()
{
	AB = kc(a, b);
	AC = kc(a, c);
	BC = kc(b, c);
}
bool TamGiac::isTamGiac()
{
	if (AB + AC > BC && AB + BC > AC && BC + AC > AB)
	{
		return true;
	}
	else
		return false;
}
float TamGiac::tinhChuVi()
{
	return AB + AC + BC;
}
float TamGiac::tinhDienTich()
{
	float p = tinhChuVi() / 2;
	return sqrt(p * (p - AB) * (p - AC) * (p - BC));
}