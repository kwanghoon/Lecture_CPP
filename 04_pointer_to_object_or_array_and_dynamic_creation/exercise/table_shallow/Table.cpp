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
	// 1) ���� ����
}
Table::~Table() {
	// 1) ���� ����
}

Table& Table::operator=(Table& tbl) {
	// 1) ���� ����
}
