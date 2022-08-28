//Fraction.cpp

#include <iostream>
#include "Fraction.h"
using namespace std;


void Fraction::setNumerator(int n) { numerator = n; }

void Fraction::setDenominator(int d) { denominator = d; }

double Fraction::getDouble() {     
	return ( static_cast<double>(numerator) / denominator );
}

void Fraction::outputReducedFraction() {

	int g;

	g = gcd();
	cout << numerator / g << "/" << denominator / g << endl;
}

int Fraction::gcd() {
	int g;

	g = numerator > denominator ? denominator : numerator;

	while (g > 1) {
		if (numerator % g == 0 && denominator %g == 0)
			return g;
		g--;
	}
	return 1;

}