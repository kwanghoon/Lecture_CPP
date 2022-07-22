#include <iostream>
#include "Fraction.h"
using namespace std;


int main() {
	
	Fraction f1, f2;

	f1.setNumerator(4);
	f1.setDenominator(2);
	cout << f1.getDouble() << endl;
	f1.outputReducedFraction();
	
	f2.setNumerator(20);
	f2.setDenominator(60);
	cout << f2.getDouble() << endl;
	f2.outputReducedFraction();
}