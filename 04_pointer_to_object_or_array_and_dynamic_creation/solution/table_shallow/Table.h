#pragma once

// Table.h

class Table {
	int size;
	int* table;  // 포인터 변수
public:
	Table(); // 기본생성자
	Table(int n); // 일반생성자
	Table(Table& tbl); // 복사생성자
	~Table();  // 소멸자
	Table& operator=(Table& tbl); // 할당연산자
};
