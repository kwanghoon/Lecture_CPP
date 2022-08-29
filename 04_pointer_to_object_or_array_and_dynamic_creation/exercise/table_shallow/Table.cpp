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
	cout << "Table copy constructor is called" << endl;
	// 1) 얕은 복사
}
Table::~Table() {
	// 1) 얕은 삭제
}

Table& Table::operator=(Table& tbl) {
	// 1) 얕은 복사
}
