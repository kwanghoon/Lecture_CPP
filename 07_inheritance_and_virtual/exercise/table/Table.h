#pragma once
// Table.h
class Table {
public:
	Table(); // 기본 생성자
	Table(const Table& tbl); // 복사 생성자
	Table(int size); // 일반 생성자
	~Table(); // 소멸자
	const Table& operator=(const Table& table); // 할당 연산자
	string& operator[](int index); // 배열 연산자
protected:
	int size; // 배열의 크기
	string* p;  // p는 문자열 배열을 가리키도록
};