#pragma once
#include <string>
using namespace std;

// Table.h
template <class T>
class Table {
public:
	Table(); // �⺻ ������
	Table(const Table<T>& tbl); // ���� ������
	Table(int size); // �Ϲ� ������
	~Table(); // �Ҹ���
	const Table<T>& operator=(const Table<T>& table); // �Ҵ� ������
	T& operator[](int index); // �迭 ������
protected:  // protected
	int size; // �迭�� ũ��
	T* p;  // p�� ���ڿ� �迭�� ����Ű����
};

// Table.cpp
template <class T>
Table<T>::Table() : Table(10) { // ����Ʈ ũ�� 10
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



