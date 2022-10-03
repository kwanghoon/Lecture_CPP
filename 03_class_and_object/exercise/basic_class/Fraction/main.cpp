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

        assert (oss.str() == /* H7 */ );  // H7에 들어갈 문자열 상수(프로그램 출력 결과)를 작성하시오.
}
