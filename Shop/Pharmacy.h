#pragma once
#include"Shop.h"
class Pharmacy:public Shop
{
	int namberImportItem, numberSoldItem,price;
public:
	void GetInfo();
	int GetResidual();
	int GetValue();
};

