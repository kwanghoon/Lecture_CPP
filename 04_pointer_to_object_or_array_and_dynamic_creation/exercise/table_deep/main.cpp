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
	t1 = t2 = t3;   // �Ҵ翬������ ����Ÿ���� Table&�� ����

	t3 = t4; // �Ҵ翬���� ȣ��
}
