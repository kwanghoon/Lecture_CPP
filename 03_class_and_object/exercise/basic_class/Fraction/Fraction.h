// #pragma once
// Fraction.h

#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction
{
public:
	double getDouble();
	void outputReducedFraction(ostream& os);
	void setNumerator(int n);
	void setDenominator(int d);
private:
	int numerator;
	int denominator;
	int gcd();
};
#endif
