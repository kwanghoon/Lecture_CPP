#include <iostream>

using namespace std;


int main() {
	string word;
	int count;

	count = 0;
	while (cin >> word) {
		count = count + 1;
	}
	// We are at EOF!
	cout << "Total: " << count << endl;

	return 0;
}

