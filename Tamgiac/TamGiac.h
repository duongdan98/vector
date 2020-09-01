#pragma once
#include"ToaDo.h"
#include<math.h>
class TamGiac :public ToaDo 
{
	
	ToaDo a, b, c;
	float AB, AC, BC;
public:
	friend istream& operator>> (istream& i, TamGiac& tg);
	friend ostream& operator <<(ostream& o, TamGiac tg);
	void setA(ToaDo);
	void setB(ToaDo);
	void setC(ToaDo);
	ToaDo getA();
	ToaDo getB();
	ToaDo getC();
	void tinhCacCanh();
	bool isTamGiac();
	float tinhChuVi();
	float tinhDienTich();
	

};

