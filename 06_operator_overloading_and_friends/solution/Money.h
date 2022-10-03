#pragma once
// Money.h
class Money {
	int dollar;
	int cent;
public:
	Money() { dollar = 0; cent = 0; }
	Money(int d, int c) { this->dollar = d; this->cent = c; }
	friend const Money operator+(const Money& m1, const Money& m2);
	friend bool operator==(const Money& m1, const Money& m2);
	friend ostream& operator<< (ostream& o, const Money& m);
	friend istream& operator>> (istream& i, Money& m);
};
