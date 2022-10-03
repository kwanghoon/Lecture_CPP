// Money.cpp
#include <iostream>
using namespace std;
#include "Money.h"

const Money operator+(const Money& m1, const Money& m2) {
	return Money(m1.dollar + m2.dollar, m1.cent + m2.cent);
}

bool operator==(const Money& m1, const Money& m2) {
	return m1.dollar == m2.dollar 
		&& m1.cent == m2.cent;
}

ostream& operator<< (ostream& o, const Money& m) {
	o << "$" << m.dollar << "." << m.cent;
	return o;
}

istream& operator>> (istream& i, Money& m) {
	i >> m.dollar >> m.cent;
	return i;
}
