// Stack.cpp
#include "Stack.h"

Stack::Stack() : Stack(10) { }

Stack::Stack(int size) {
	this->size = size;
	this->ptr = new int[this->size];
	this->top = -1;
}

Stack::Stack(Stack& stk) {
	// 2) 깊은 방식
}

Stack::~Stack() {
	// 2) 깊은 방식
}

Stack& Stack::operator=(Stack& stk) {
	// 2) 깊은 방식
}

// 스택 연산
void Stack::push(int elem) {
	if (top < size) { // 한도를 넘어가지 않으면
		top = top + 1;
		this->ptr[top] = elem;
	}
}

void Stack::pop(int& elem) {
	if (top >= 0) { // push한 원소가 여전히 남아 있으면
		elem = this->ptr[top];
		this->ptr[top] = -9999; // 초기화
		top = top - 1;
	}
}

bool Stack::isEmpty() {
	if (top == -1) return true;
	else return false;
}
