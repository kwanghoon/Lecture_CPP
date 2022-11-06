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
	const Table& operator=(const Table<T>& table); // �Ҵ� ������
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
        // �ϼ��Ͻÿ�.
}

template <class T>
Table<T>::Table(const Table<T>& table) {
        // �ϼ��Ͻÿ�.
}

template <class T>
Table<T>::~Table() {
        // �ϼ��Ͻÿ�.
}

template <class T>
T& Table<T>::operator[](int index) {
        // �ϼ��Ͻÿ�.
}

template <class T>
const Table<T>& Table<T>::operator=(const Table<T>& table) {
        // �ϼ��Ͻÿ�.
}



