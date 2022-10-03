#include <iostream>
#include "DayOfYear.h"

using namespace std;

int main(void)
{
	DayOfYear date1(2, 3), date2(6), date3;
	cout << "Initialized dates :" << endl;
	date1.output();
	date2.output();
	date3.output();

	return 0;
}
