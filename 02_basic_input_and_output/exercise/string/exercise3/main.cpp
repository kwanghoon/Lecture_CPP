#include <iostream>
#include <string>

using namespace std;


int main() {
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
