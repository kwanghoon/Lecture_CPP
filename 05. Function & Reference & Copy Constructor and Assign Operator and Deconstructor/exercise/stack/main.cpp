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
	int z;
	stk.push(1); stk.push(2); stk.push(3); stk.push(4); stk.push(5);
	f(stk);
	stk.pop(z); cout << z; 
}
