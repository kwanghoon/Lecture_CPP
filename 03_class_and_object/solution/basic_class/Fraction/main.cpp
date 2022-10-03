#include <iostream>
#include <sstream>  // ostringstream
#include <string>   // ==
#include <cassert>  // assert

#include "Fraction.h"
using namespace std;


int main() {
        ostringstream oss;
	Fraction f1, f2;

        // 4 / 2
	f1.setNumerator(4);
	f1.setDenominator(2);

	cout << f1.getDouble() << endl;
        oss << f1.getDouble() << endl;

	f1.outputReducedFraction(cout);
	f1.outputReducedFraction(oss);

        // 30 / 60 	
	f2.setNumerator(30);
	f2.setDenominator(60);

	cout << f2.getDouble() << endl;
	oss << f2.getDouble() << endl;

	f2.outputReducedFraction(cout);
	f2.outputReducedFraction(oss);

        assert (oss.str() == "2\n2/1\n0.5\n1/2\n");
}
