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
	const Table& operator=(const Table<T>& table); // 할당 연산자
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
        // 완성하시오.
}

template <class T>
Table<T>::Table(const Table<T>& table) {
        // 완성하시오.
}

template <class T>
Table<T>::~Table() {
        // 완성하시오.
}

template <class T>
T& Table<T>::operator[](int index) {
        // 완성하시오.
}

template <class T>
const Table<T>& Table<T>::operator=(const Table<T>& table) {
        // 완성하시오.
}



