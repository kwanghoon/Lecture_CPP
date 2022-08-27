#include <iostream>
#include <string>
using namespace std;

#include "Table.h"
#include "TableBak.h"

int main() {
	TableBak<string> t1(2);
	Table<string> t2(2);
	Table<string> t3(t2);

	t1[0] = "hello";
	t1[1] = "world";
	
	cout << t1[0] << " " << t1[1] << endl;

	t2[0] = "abc";
	t2[1] = "def";

	t1.backup();
	t1.Table<string>::operator=(t2);   // t1 = t2;
	cout << t1[0] << " " << t1[1] << endl;

	t1.restore();
	cout << t1[0] << " " << t1[1] << endl;
}
