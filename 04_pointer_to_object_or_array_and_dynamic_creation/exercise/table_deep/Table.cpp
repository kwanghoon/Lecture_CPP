// Table.cpp
#include <iostream>
using namespace std;
#include "Table.h"
Table::Table() : Table(10) {
	// table = new int[10]; // �⺻ ���̺��� ũ�Ⱑ 10
}
Table::Table(int n) {
	cout << "Table(" << n << ")" << endl;
	table = new int[n];  //���̺� ũ�⸦ n����
	size = n;
}
Table::Table(Table& tbl) {
	cout << "Table copy constructor is called" << endl;
	// 2) ���� ����
}
Table::~Table() {
	// 2) ���� ����
}

Table& Table::operator=(Table& tbl) {
	// 2) ���� ����
}
