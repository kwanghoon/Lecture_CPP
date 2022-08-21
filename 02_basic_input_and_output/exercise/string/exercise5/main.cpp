#include <iostream>
#include <string>
#include <sstream> // istringstream, ostringstream
using namespace std;

int main() {
	ostringstream ost;

	ost << 123 << "," << 456; // sprintf
	cout << ost.str() << endl;

	istringstream ist("choi kwanghoon");  // sscanf
	string w1, w2;
	ist >> w1 >> w2;

	cout << w1 << w2 << endl;

	return 0;
}
