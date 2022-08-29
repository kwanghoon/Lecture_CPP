// main.cpp
#include <iostream>
using namespace std;

#include "Money.h"

int main() {
	Money m1(10, 20), m2(30, 40), m3;

	m3 = m1 + m2; // m3 = operator+(m1,m2);
	cout << "m1 ( " << m1 << " ) + " << "m2 ( " << m2 << " ) = " << m3 << endl;

	if (m3 == Money(40, 60)) // operator==(m3,Money(0,0))
		cout << "m3 == " << m3 << endl;

        cout << "m1 (Enter one number for dollars and another number for cents): " ;
	cin >> m1 ;

        cout << "m2 (Enter one number for dollars and another number for cents): " ;
	cin >> m2 ;

	m3 = m1 + m2;
	cout << "m1 ( " << m1 << " ) + " << "m2 ( " << m2 << " ) = " << m3 << endl;

	if (m3 == Money(40, 60)) // operator==(m3,Money(0,0))
		cout << "m3 == " << m3 << endl;
}
