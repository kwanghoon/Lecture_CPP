// #pragma once
// Fraction.h

#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
public:
	double getDouble();
	void outputReducedFraction();
	void setNumerator(int n);
	void setDenominator(int d);
private:
	int numerator;
	int denominator;
	int gcd();
};
#endif
