#include <iostream>
#include <string>
using namespace std;

#include "Table.h"
#include "TableBak.h"

int main() {

	// Using tables 
	Table t1, t2(20);
	Table t3(t2);

	t1[0] = "hello";
	t1[1] = "world";

	t3 = t1;

	cout << t3[0] << " " << t3[1] << endl;


	// Using tables with backup/restore.
	TableBak tb1, tb2(20);
	TableBak tb3(tb2);

	tb1[0] = "hello";
	tb1[1] = "world";

	tb3 = tb1;

	cout << tb3[0] << " " << tb3[1] << endl;

	// backup tb3!
	tb3.backup();  

	tb2[0] = "hello from table2";
	tb2[1] = "world from table2";

	tb3 = tb2;

	cout << tb3[0] << " " << tb3[1] << endl;

	// restore the backup table!
	tb3.restore();  

	cout << tb3[0] << " " << tb3[1] << endl;

	return 0;
}
