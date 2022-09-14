#include <iostream>
#include "Holiday.h"

using namespace std;

int main(void)
{
        Holiday h(2, 14, true);

        cout << endl;

        cout << "Testing the class Hierachy.\n";
        h.output();

	return 0;
}
