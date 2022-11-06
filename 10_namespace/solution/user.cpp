// user.cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

namespace {  // �̸����� ���ӽ����̽�
	string username;
	bool isValid() {
	   if (username.size() == 8) {
	       return
		     all_of( username.begin(), username.end(),
			     [](char ch) { 
                                return 'a'<=ch && ch<='z' || 'A'<=ch && ch<='Z';
                             } );
	   }
	   else 
	     return false;
	}
	// C���: static bool isValid() { } 
}

namespace Authenticate { // �Ϲ� ���ӽ����̽�
	void inputUserName() { 
		do {
			cout << "Enter your user name : ";
			cin >> username;
		} while (!isValid());
	}
	string getUserName() { return username; }
}
