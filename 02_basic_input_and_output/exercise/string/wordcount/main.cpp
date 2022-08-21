#include <iostream>
#include <string>

using namespace std;

int main() {
	string line;
	int count, wordcount;

	count = 0; wordcount;
	while (cin.eof() == false) {    
		getline(cin, line);
	//	cout << line << endl;
		count = count + 1;
		wordcount = wordcount + 1;
	}

	cout << "Total: " << count;

	return 0;

}

