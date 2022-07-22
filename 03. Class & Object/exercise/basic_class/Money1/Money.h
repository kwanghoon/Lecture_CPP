// #pragma once
// Money.h

#ifndef MONEY_H
#define MONEY_H

class Money
{
public:
	int getDollars();
	int getCents();
	void setDollars(int d);
	void setCents(int c);
	double getAmount();
private:
	int dollars;
	int cents;
};
#endif
