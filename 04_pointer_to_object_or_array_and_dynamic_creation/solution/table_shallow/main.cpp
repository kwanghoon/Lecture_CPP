#include <iostream>

using namespace std;

#include "Table.h"

void f(Table t1) {
}

Table g() {
	Table t2;
	return t2;
}

int main() {
	Table t5;
	Table t4 = t5;

	f(t5);

	g();

	Table t1, t2, t3;
	t1 = t2 = t3;   // 할당연산자의 리턴타입이 Table&인 이유

	t3 = t4; // 할당연산자 호출
}
