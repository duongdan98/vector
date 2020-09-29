#include "BookStore.h"
int BookStore::GetValue()
{
	return numberBook * price;
}
void BookStore::GetInfo()
{
	Shop::GetInfo();
	cout << "gia tri cua";
}
