//Stack.cpp

#include "Stack.h"
#include <iostream>
using namespace std;


// 스택 연산
Stack::Stack() : Stack(10) {} //기본생성자

Stack::Stack(int size) { //일반생성자
	this->size = size;
	this->ptr = new int[this->size];
	this->top = -1;
}

Stack::Stack(Stack& stk) {//복사생성자
	//1) 얕은 방식
	this->size = stk.size;
	this->ptr = stk.ptr;
	this->top = stk.top;

	//2) 깊은 방식
	// this->size = stk.size;
	// this->top = stk.top;
	// this->ptr = new int[size];
	// for (int i = 0; i <= this->size; i++) {
	// 	this->ptr[i] = stk.ptr[i];
	//}
}

Stack::~Stack() {
	//1) 얕은 방식
	this->ptr = NULL;

	//2) 깊은 방식
	// delete[] this->ptr;
	// this->ptr = NULL;
}

Stack& Stack::operator=(Stack& stk) {
	//1) 얕은 방식
	this->size = stk.size;
	this->ptr = stk.ptr;
	this->top = stk.top;

	//2) 깊은 방식
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
	if (top >= 0) { //push한 원소가 여전히 남아 있으면
		elem = this->ptr[top];
		this->ptr[top] = -9999; //초기화
		top = top - 1;
	}
}

bool Stack::isEmpty() {
	if (top == -1) return true;
	else return false;
}
