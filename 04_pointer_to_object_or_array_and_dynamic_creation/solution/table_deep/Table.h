#pragma once

// Table.h

class Table {
	int size;
	int* table;  // ������ ����
public:
	Table(); // �⺻������
	Table(int n); // �Ϲݻ�����
	Table(Table& tbl); // ���������
	~Table();  // �Ҹ���
	Table& operator=(Table& tbl); // �Ҵ翬����
};
