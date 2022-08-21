// main.cpp

#include <iostream>
using namespace std;
#include "Stack.h"

void f(Stack stk) {
	int x;
	stk.pop(x); stk.pop(x);
}


int main() {
	Stack stk(20);
	int x;
	stk.push(1); stk.push(2); stk.push(3); stk.push(4); stk.push(5);
	f(stk);
	int z;
	stk.pop(z); cout << "Shallow copy: " << z << endl;
}

