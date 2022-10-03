//Money.cpp


#include "Money.h"

int Money::getDollars() { return dollars; }
// H1. getCents 멤버 함수 정의? 

// H2. setDollars 멤버 함수 정의?
void Money::setCents(int c) { cents = c; }

double Money::getAmount()
{
	return static_cast<double>(dollars) +
		static_cast<double>(cents) / 100;
}
