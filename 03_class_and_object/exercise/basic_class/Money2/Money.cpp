//Money.cpp


#include "Money.h"

int Money::getDollars()
{
	return /* H3 */ ;
}

int Money::getCents()
{
	int val = /* H4 */ ;

	return val % 100;
}

void Money::setDollars(int d)
{
	int c = getCents();
	amount = /* H5 */ ;

}

void Money::setCents(int c)
{
	int d = /* H6 */  ;
	amount = static_cast<double>(d) + (c / 100.0);

}

double Money::getAmount() { return amount; }
