#include <iostream>
#include <string>
#include <sstream> // istringstream, ostringstream
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

int exercise7() {
	string word;

	while (cin.eof() == false) {    // while ( cin >> word ) { 
		cin >> word;                //   // do something
		// do something             // }
	}

	return 0;
}

int exercise6() {
	string word;
	int count;

	count = 0;
	while (cin >> word) {
		count = count + 1;
	}
	// EOF�� ����
	cout << "Total: " << count << endl;

	return 0;
}

int exercise5() {
	ostringstream ost;

	ost << 123 << "," << 456; // sprintf
	cout << ost.str();

	istringstream ist("choi kwanghoon");  // sscanf
	string w1, w2;
	ist >> w1 >> w2;

	cout << w1 << w2 << endl;

	return 0;
}
int exercise4() {
	string word;
	string line;

	//cout << "�ܾ� �Է�: ";
	//cin >> word;
	//cout << word << endl;

	cout << "��/���� �Է�: ";
	getline(cin, line); // geline�� �����Լ�
	cout << line << endl;

	return 0;
}
int exercise3() {
	string s1, s2, s3;

	s1 = "hello"; // strcpy(str, "hello")
	s2 = s1; // strcpy(str2, str1)
	s3 = s1 + s2; // strcat (str1, str2, str3)
	// string concatenation ���ڿ� ����

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;

	string s4("ants"); // "ants"�� ������ s4�� �ʱ�ȭ
	string s5(s4); // s4�� ������ s5�� �ʱ�ȭ

	if (s4 == s5) {    // strcmp(str4, str5)==0
		cout << "s4�� s5�� ������" << endl;
	}


	return 0;
}
int exercise2() {
	int oprnd1, oprnd2;
	string op;
	int result;

	cin >> oprnd1 >> op >> oprnd2;

	if (op == "+")
		result = oprnd1 + oprnd2;
	else if (op == "-")
		result = oprnd1 - oprnd2;
	// ...

	cout << result << endl;

	return 0;
}

int exercise1() {
	int width, height;

	cin >> width >> height;

	cout << width << " x " << height
		<< " = " << width * height
		<< endl;

	return 0;
}