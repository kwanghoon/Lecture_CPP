#include <iostream>
#include <string>
#include <sstream> // istringstream, ostringstream
using namespace std;

int main() {
        // ostringstream
	cout << "Enter two numbers: ";
	int num1, num2;
	cin >> num1 >> num2;

	cout << "cout: " << num1 << "," << num2 << endl; // cout을 통해 화면에 직접 출력

	ostringstream ost;

	ost << "ost: " << num1 << "," << num2;   // ost에 출력  cf. sprintf
	cout << ost.str() << endl;  // ost에 출력한 문자열을 cout에 출력


        // istringstream
	cout << "Enter the first and last name (choi kwanghoon): ";
        string line;
	do {
	  getline(cin, line);
	} while (line == "");

	istringstream ist(line);  

	string w1, w2;
	ist >> w1 >> w2;     //  ist(line)으로부터 두 단어 w1과 w2를 입력 받음  cf. sscanf

	cout << "ist: " << w1 << "," << w2 << endl;

	return 0;
}
