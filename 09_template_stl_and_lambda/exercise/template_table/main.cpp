#include <iostream>
#include <string>
using namespace std;

#include "Table.h"
#include "TableBak.h"

int main() {
	// (1) First round
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

	// (2) Second round
	TableBak<Table<string>> t4(2);
	TableBak<Table<string>> t5(2);
	Table<string> t6(t2);

	t4[0] = t1;
	
	cout << t4[0][0] << " " << t4[0][1] << endl;

	t5[0] = t2;

	t4.backup();
	t4.Table<Table<string>>::operator=(t5);   // t4 = t5;
	cout << t4[0][0] << " " << t4[0][1] << endl;

	t4.restore();
	cout << t4[0][0] << " " << t4[0][1] << endl;

}
