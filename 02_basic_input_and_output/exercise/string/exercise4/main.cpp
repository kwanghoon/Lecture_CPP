#include <iostream>

using namespace std;

int main() {
	string word;
	string line;

	//cout << "Input a word: ";
	//cin >> word;
	//cout << word << endl;

	cout << "Input a line: ";
	getline(cin, line); // geline is a global function
	cout << line << endl;

	return 0;
}
