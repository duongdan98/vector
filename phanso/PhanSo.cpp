#include "PhanSo.h"

istream& operator>>(istream& i, PhanSo& ps)
{
	cout << "nhap vao tu so\n";
	i >> ps.ts;
	cout << "nhap vao mau so\n";
	i >> ps.ms;
	while (ps.ms == 0)
	{
		cout << "mau so phai khac 0,nhap lai!\n";
		i >> ps.ms;
	}
	return i;
}
ostream& operator<<(ostream& o, PhanSo ps)
{
	if (ps.ms == 1)
	{
		o << ps.ts<<endl;
	}
	else
	{
		o << ps.ts << "/" << ps.ms<<endl;
	}
	return o;
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	if (a > b) return UCLN(a - b, b);
	else if (b > a) return UCLN(a, b - a);
	return a;
}
void PhanSo::toiGian()
{
	int ucln = UCLN(ts, ms);
	ts /= ucln;
	ms /= ucln;
}
PhanSo PhanSo::operator+(PhanSo a)
{
	PhanSo temp;
	temp.ts = ts * a.ms + ms * a.ts;
	temp.ms = ms * a.ms;
	temp.toiGian();
	return temp;
}
PhanSo PhanSo::operator-(PhanSo a)
{

	PhanSo temp;
	temp.ts = ts * a.ms - ms * a.ts;
	temp.ms = ms * a.ms;
	temp.toiGian();
	return temp;

}
PhanSo PhanSo::operator*(PhanSo a)
{
	PhanSo temp;
	temp.ts = ts * a.ts;
	temp.ms = ms * a.ms;
	temp.toiGian();
	return temp;
}
PhanSo PhanSo::operator/(PhanSo a)
{
	PhanSo temp;
	temp.ts = ts * a.ms;
	temp.ms = ms * a.ts;
	temp.toiGian();
	return temp;
}
bool operator >(PhanSo a, PhanSo b)
{
	float x = (float)a.ts / a.ms;
	float y = (float)b.ts / b.ms;
	return x > y ? true : false;
 }
bool operator <(PhanSo a, PhanSo b)
{
	float x = (float)a.ts / a.ms;
	float y = (float)b.ts / b.ms;
	return x < y ? true : false;
 }
void Sort(vector<PhanSo>& PS)
{
	cout << PS.size();
	for (int i = 0; i < PS.size(); i++)
	{
		for (int j = 1; j < PS.size(); j++)
		{
			if (PS.at(i) > PS.at(j))
			{
				/*PhanSo temp = PS.at(i);
				PS.at(i) = PS.at(j);
				PS.at(j) = temp;*/
				swap(PS.at(i), PS.at(j));
			}
		}
	}
}