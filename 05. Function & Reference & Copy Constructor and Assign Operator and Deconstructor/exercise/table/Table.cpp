// Table.cpp
#include <iostream>
using namespace std;
#include "Table.h"
Table::Table() : Table(10) {
	// table = new int[10]; // 기본 테이블의 크기가 10
}
Table::Table(int n) {
	cout << "Table(" << n << ")" << endl;
	table = new int[n];  //테이블 크기를 n으로
	size = n;
}
Table::Table(Table& tbl) {
	cout << "Table 복사생성자 호출" << endl;
	// 1) 얕은 복사
	// this->size = tbl.size;
// 	this->table = tbl.table;
	// 2) 깊은 복사
	this->size = tbl.size;
	this->table = new int[size];
	for (int i = 0; i < size; i++)
		this->table[i] = tbl.table[i];
}
Table::~Table() {
	// 얕은 삭제
	// this->table = NULL; 
	// 깊은 삭제
	delete[] this->table;
	this->table = NULL;
}

Table& Table::operator=(Table& tbl) {
	// 1) 얕은 복사
	//this->size = tbl.size;
	//this->table = tbl.table;
	// 2) 깊은 복사
	this->size = tbl.size;
	delete[] this->table;  // 복사생성자와 다른점
	this->table = new int[this->size];
	for (int i = 0; i < this->size; i++) {
		this->table[i] = tbl.table[i];
	}
	return *this;
}
