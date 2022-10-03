#pragma once
// Table.h
class Table {
public:
	Table(); // �⺻ ������
	Table(const Table& tbl); // ���� ������
	Table(int size); // �Ϲ� ������
	~Table(); // �Ҹ���
	const Table& operator=(const Table& table); // �Ҵ� ������
	string& operator[](int index); // �迭 ������
protected:
	int size; // �迭�� ũ��
	string* p;  // p�� ���ڿ� �迭�� ����Ű����
};