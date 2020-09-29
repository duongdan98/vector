#pragma once
#include"Shop.h"
class BookStore:public Shop
{
	int numberBook, price;
public:
	int GetValue();
	void GetInfo();
};

