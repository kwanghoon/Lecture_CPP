#include <iostream>
#include <string>
using namespace std;

#include "Table.h"

int main() {

	// Using tables 
	Table t1, t2(20);
	Table t3(t2);

	t1[0] = "hello";
	t1[1] = "world";

	t3 = t1;

	cout << t3[0] << " " << t3[1] << endl;

	return 0;
}
