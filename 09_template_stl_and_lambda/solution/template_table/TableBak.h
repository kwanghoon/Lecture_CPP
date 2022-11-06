#pragma once
// TableBak.h
#include <string>
using namespace std;
#include "Table.h"
template <class T>
class TableBak : public Table<T> {
public:
	TableBak();
	TableBak(int size);
	TableBak(const TableBak<T>& tablebak);
	~TableBak();
	const TableBak<T>& operator=(const TableBak<T>& tablebak);
	void backup();
	void restore();
private:
	int sizebak;
	T* pbak;
};

// TableBak.cpp
template <class T>
TableBak<T>::TableBak() : TableBak(10) {
}

template <class T>
TableBak<T>::TableBak(int size) : Table<T>(size) {
	this->sizebak = 0;
	this->pbak = NULL;
}

template <class T>
TableBak<T>::TableBak(const TableBak<T>& tablebak) 
	: Table<T>(tablebak) {
	this->sizebak = tablebak.sizebak;
	this->pbak = NULL;
	if (this->sizebak != 0) {
		this->pbak = new T[this->sizebak];
		for (int i = 0; i < this->sizebak; i++)
			this->pbak[i] = tablebak.pbak[i];
	}
}

template <class T>
const TableBak<T>& TableBak<T>::operator=(
	const TableBak<T>& tablebak) {
	if (this != &tablebak) {  // a = a; 아닌 경우
		this->Table<T>::operator=(tablebak);
		this->sizebak = tablebak.sizebak;
		delete[] this->pbak;
		this->pbak = NULL;
		if (this->sizebak > 0) {  // 할당할 크기 > 0 
			this->pbak = new T[this->sizebak];
			for (int i = 0; i < this->sizebak; i++)
				this->pbak[i] = tablebak.pbak[i];
		}
	}
	return *this;
}

template <class T>
TableBak<T>::~TableBak() {
	if (this->pbak != NULL) {
		delete[] this->pbak;
		this->pbak = NULL;
	}
}

template <class T>
void TableBak<T>::backup() {
	this->sizebak = this->size;
	this->pbak = new T[this->sizebak];
	for (int i = 0; i < this->sizebak; i++)
		this->pbak[i] = this->p[i];
}

template <class T>
void TableBak<T>::restore() {
	this->size = this->sizebak;
	delete[] this->p;
	this->p = new T[this->size];
	for (int i = 0; i < this->size; i++)
		this->p[i] = this->pbak[i];
}
