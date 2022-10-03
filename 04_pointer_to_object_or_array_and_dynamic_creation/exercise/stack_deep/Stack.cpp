// Stack.cpp
#include "Stack.h"

Stack::Stack() : Stack(10) { }

Stack::Stack(int size) {
	this->size = size;
	this->ptr = new int[this->size];
	this->top = -1;
}

Stack::Stack(Stack& stk) {
	// 2) ���� ���
}

Stack::~Stack() {
	// 2) ���� ���
}

Stack& Stack::operator=(Stack& stk) {
	// 2) ���� ���
}

// ���� ����
void Stack::push(int elem) {
	if (top < size) { // �ѵ��� �Ѿ�� ������
		top = top + 1;
		this->ptr[top] = elem;
	}
}

void Stack::pop(int& elem) {
	if (top >= 0) { // push�� ���Ұ� ������ ���� ������
		elem = this->ptr[top];
		this->ptr[top] = -9999; // �ʱ�ȭ
		top = top - 1;
	}
}

bool Stack::isEmpty() {
	if (top == -1) return true;
	else return false;
}
