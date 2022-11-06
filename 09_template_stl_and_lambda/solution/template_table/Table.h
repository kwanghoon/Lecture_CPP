#pragma once
#include <string>
using namespace std;

// Table.h
template <class T>
class Table {
public:
	Table(); // 기본 생성자
	Table(const Table<T>& tbl); // 복사 생성자
	Table(int size); // 일반 생성자
	~Table(); // 소멸자
	const Table<T>& operator=(const Table<T>& table); // 할당 연산자
	T& operator[](int index); // 배열 연산자
protected:  // protected
	int size; // 배열의 크기
	T* p;  // p는 문자열 배열을 가리키도록
};

// Table.cpp
template <class T>
Table<T>::Table() : Table(10) { // 디폴트 크기 10
}

template <class T>
Table<T>::Table(int size) {
	this->size = size;
	this->p = new T[this->size];
}

template <class T>
Table<T>::Table(const Table<T>& table) {
	this->size = table.size;
	this->p = new T[this->size];
	for (int i = 0; i < this->size; i++)
		this->p[i] = table.p[i];
}

template <class T>
Table<T>::~Table() {
	delete[] p;
}

template <class T>
T& Table<T>::operator[](int index) {
	return this->p[index];
}

template <class T>
const Table<T>& Table<T>::operator=(const Table<T>& table) {
	if (this != &table) {  // this : Table*, table : Table
		this->size = table.size;
		delete[] this->p;
		this->p = new T[this->size];
		for (int i = 0; i < this->size; i++)
			this->p[i] = table.p[i];
	}
	return *this;
}



