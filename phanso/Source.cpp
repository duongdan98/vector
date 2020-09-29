#include"PhanSo.h"

int main()
{
	vector<PhanSo> PS;
	PhanSo a,b,c;
	cin >> a >> b>>c;
	PS.push_back(a);
	PS.push_back(b);
	PS.push_back(c);
	cout << a << b << c;
	if (a > b) {
		cout << "a>b";
	}
	
	//Sort(PS);
	/*for (int i = 0; i < PS.size(); i++)
	{
		cout << PS.at(i) << endl;
	}*/
	/*cout << "tong=" << a + b;
	cout << "hieu=" << a - b;
	cout << "tich=" << a * b;
	cout << "thuong=" << a / b;*/
	return 0;
}