#include <iostream>

using namespace std;

int main() {
	string word;
	string line;

	//cout << "단어 입력: ";
	//cin >> word;
	//cout << word << endl;

	cout << "줄/라인 입력: ";
	getline(cin, line); // geline은 전역함수
	cout << line << endl;

	return 0;
}
