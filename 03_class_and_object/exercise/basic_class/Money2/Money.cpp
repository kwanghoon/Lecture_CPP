//Money.cpp


#include "Money.h"

int Money::getDollars()
{
	return static_cast<int>(amount);
}

int Money::getCents()
{
	int val = amount * 100;

	return val % 100;
}

void Money::setDollars(int d)
{
	int c = getCents();
	amount = static_cast<double>(c) + (d / 100.0);

}

void Money::setCents(int c)
{
	int d = getDollars();
	amount = static_cast<double>(d) + (c / 100.0);

}

double Money::getAmount() { return amount; }