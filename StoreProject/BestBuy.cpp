#include "BestBuy.h"

BestBuy::BestBuy(string name)
{
	this->StoreName = name;
	this->AcumSales = 0;
}

void BestBuy::CalcAcum(double s)
//recieves one reciever, double s
{
	this->AcumSales += s;
}

double BestBuy::getAcumSales()
{
	return this->AcumSales;
}
string BestBuy::getStoreName()
{
	return this->StoreName;
}