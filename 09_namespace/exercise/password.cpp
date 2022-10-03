// password.cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/* 완성하시오 */ {
	string password;
	bool isValid() { 
	   if (password.size() >= 8) {
	     return
	       any_of(password.begin(), password.end(),
		      [](char ch) { 
			return !('a'<=ch && ch<='z' || 'A'<=ch && ch<='Z'); } );
	   }
	   else 
	     return false;
	}
}

/* 완성하시오 */ {
	void inputPassword() { 
		do {
			cout << "Enter your password : ";
			cin >> password;
		} while (!isValid());
	}
	string getPassword() { return password; }
}
