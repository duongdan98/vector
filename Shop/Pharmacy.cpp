#include "Pharmacy.h"
void Pharmacy::GetInfo()
{
	Shop::GetInfo();

}
int Pharmacy::GetResidual()
{
	return namberImportItem - numberSoldItem;
 }
int Pharmacy::GetValue()
{
	return GetResidual() * price;
}