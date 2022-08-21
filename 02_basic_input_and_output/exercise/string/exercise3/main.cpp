#include <iostream>
#include <string>

using namespace std;


int main() {
	string s1, s2, s3;

	s1 = "hello"; // strcpy(str, "hello")
	s2 = s1; // strcpy(str2, str1)
	s3 = s1 + s2; // strcat (str1, str2, str3)
	// string concatenation 문자열 접합

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;

	string s4("ants"); // "ants"를 가지고 s4를 초기화
	string s5(s4); // s4를 가지고 s5를 초기화

	if (s4 == s5) {    // strcmp(str4, str5)==0
		cout << "s4와 s5는 동일함" << endl;
	}


	return 0;
}
