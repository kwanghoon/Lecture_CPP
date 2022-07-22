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
	cout << "Table ��������� ȣ��" << endl;
	// 1) ���� ����
	// this->size = tbl.size;
// 	this->table = tbl.table;
	// 2) ���� ����
	this->size = tbl.size;
	this->table = new int[size];
	for (int i = 0; i < size; i++)
		this->table[i] = tbl.table[i];
}
Table::~Table() {
	// ���� ����
	// this->table = NULL; 
	// ���� ����
	delete[] this->table;
	this->table = NULL;
}

Table& Table::operator=(Table& tbl) {
	// 1) ���� ����
	//this->size = tbl.size;
	//this->table = tbl.table;
	// 2) ���� ����
	this->size = tbl.size;
	delete[] this->table;  // ��������ڿ� �ٸ���
	this->table = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		this->table[i] = tbl.table[i];
	}
	return *this;
}
