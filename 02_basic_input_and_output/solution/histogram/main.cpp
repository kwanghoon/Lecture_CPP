#include <iostream>
#include <string>
#include <sstream>// istringstream, ostringstream 포함
#include <cctype>//toupper(ch), tolower(ch), isdgit(ch), isalpha(ch) 사용

//#include <cstring>//strcpy,strcat, strcmp 사용하기 위해 사용

using namespace std;

int main() {
	string word;
	int scounter[26] = { 0 };
	int  a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
	int count = 0;
	int ct = 0;

	a = b = c = d = e = f = g = h=i = j = k = l = m = n = o = p = q = r = s = t = u = v = w = x = y = z = 0;

	while (cin >> word) {
		
		if (toupper(word[0]) == 'A') {a++;}
		else if (toupper(word[0]) == 'B') { b++; }
		else if (toupper(word[0]) == 'C') { c++; }
		else if (toupper(word[0]) == 'D') { d++; }
		else if (toupper(word[0]) == 'E') { e++; }
		else if (toupper(word[0]) == 'F') { f++; }
		else if (toupper(word[0]) == 'G') { g++; }
		else if (toupper(word[0]) == 'H') { h++; }
		else if (toupper(word[0]) == 'I') { i++; }
		else if (toupper(word[0]) == 'J') { j++; }
		else if (toupper(word[0]) == 'K') { k++; }
		else if (toupper(word[0]) == 'L') { l++; }
		else if (toupper(word[0]) == 'M') { m++; }
		else if (toupper(word[0]) == 'N') { n++; }
		else if (toupper(word[0]) == 'O') { o++; }
		else if (toupper(word[0]) == 'P') { p++; }
		else if (toupper(word[0]) == 'Q') { q++; }
		else if (toupper(word[0]) == 'R') { r++; }
		else if (toupper(word[0]) == 'S') { s++; }
		else if (toupper(word[0]) == 'T') { t++; }
		else if (toupper(word[0]) == 'U') { u++; }
		else if (toupper(word[0]) == 'V') { v++; }
		else if (toupper(word[0]) == 'W') { w++; }
		else if (toupper(word[0]) == 'X') { x++; }
		else if (toupper(word[0]) == 'Y') { y++; }
		else if (toupper(word[0]) == 'Z') { z++; }

		count = count +1;
		//do something
	}

	cout << "Total : " << count << "words" << endl;
	cout << "A : "; while (ct < a) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "B : "; while (ct < b) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "C : "; while (ct < c) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "D : "; while (ct < d) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "E : "; while (ct < e) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "F : "; while (ct < f) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "G : "; while (ct < g) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "H : "; while (ct < h) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "I : "; while (ct < i) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "J : "; while (ct < j) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "K : "; while (ct < k) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "L : "; while (ct < l) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "M : "; while (ct < m) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "N : "; while (ct < n) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "O : "; while (ct < o) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "P : "; while (ct < p) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "Q : "; while (ct < q) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "R : "; while (ct < r) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "S : "; while (ct < s) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "T : "; while (ct < t) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "U : "; while (ct < u) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "V : "; while (ct < v) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "W : "; while (ct < w) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "X : "; while (ct < x) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "Y : "; while (ct < y) { cout << "*"; ct++; } cout << endl; ct = 0;
	cout << "Z : "; while (ct < z) { cout << "*"; ct++; } cout << endl; ct = 0;


	return 0;
}

