#include <iostream>
#include "Money.h"
using namespace std;


int main() {
	Money m1, m2;
	m1.setDollars(20);
	m1.setCents(35);

	m2.setDollars(0);
	m2.setCents(98);

	cout << m1.getDollars() << "." << m1.getCents() << endl;
	cout << m1.getAmount() << endl;
	cout << m2.getAmount() << endl;
}