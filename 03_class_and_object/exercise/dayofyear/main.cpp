#include <iostream>
#include <cstdlib>
#include "DayOfYear.h"

using namespace std;

int main(void)
{
	DayOfYear date1(2, 3), date2(6), date3;
	cout << "Initialized dates :" << endl;
	date1.output();
	cout << endl;
	date2.output();
	cout << endl;
	date3.output();
	cout << endl;

	return 0;
}