#pragma once

//Stack.h

class Stack {
	int size;
	int top;
	int* ptr;

public:
	Stack();
	Stack(int size);
	Stack(Stack& stack);
	~Stack();
	Stack& operator=(Stack& stack);
	//stack ¿¬»ê
	void push(int elem);
	void pop(int& elem);
	bool isEmpty();
};