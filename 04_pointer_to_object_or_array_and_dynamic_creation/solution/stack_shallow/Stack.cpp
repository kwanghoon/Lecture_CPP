//Stack.cpp

#include "Stack.h"
#include <iostream>
using namespace std;


// ���� ����
Stack::Stack() : Stack(10) {} //�⺻������

Stack::Stack(int size) { //�Ϲݻ�����
	this->size = size;
	this->ptr = new int[this->size];
	this->top = -1;
}

Stack::Stack(Stack& stk) {//���������
	//1) ���� ���
	this->size = stk.size;
	this->ptr = stk.ptr;
	this->top = stk.top;

	//2) ���� ���
	// this->size = stk.size;
	// this->top = stk.top;
	// this->ptr = new int[size];
	// for (int i = 0; i <= this->size; i++) {
	// 	this->ptr[i] = stk.ptr[i];
	//}
}

Stack::~Stack() {
	//1) ���� ���
	this->ptr = NULL;

	//2) ���� ���
	// delete[] this->ptr;
	// this->ptr = NULL;
}

Stack& Stack::operator=(Stack& stk) {
	//1) ���� ���
	this->size = stk.size;
	this->ptr = stk.ptr;
	this->top = stk.top;

	//2) ���� ���
	// this->size = stk.size;
	// this->top = stk.top;
	// delete[] this->ptr;
	// this->ptr = new int[size];
	// for (int i = 0; i <= this->size; i++) {
	//	this->ptr[i] = stk.ptr[i];
	//}
	
	return *this;
}



void Stack::push(int elem) {
	if (top < size) {
		top = top + 1;
		this->ptr[top] = elem;
	}
}

void Stack::pop(int& elem) {
	if (top >= 0) { //push�� ���Ұ� ������ ���� ������
		elem = this->ptr[top];
		this->ptr[top] = -9999; //�ʱ�ȭ
		top = top - 1;
	}
}

bool Stack::isEmpty() {
	if (top == -1) return true;
	else return false;
}
