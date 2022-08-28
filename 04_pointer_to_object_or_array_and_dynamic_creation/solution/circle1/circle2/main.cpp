#include <iostream>
using namespace std;

#include "Circle.h"

int main() {
	Circle donut;
	Circle pizza(30);
	cout << donut.getArea() << endl;

	Circle* p = & donut; // & 주소 연산자
	cout << (*p).getArea() << endl; // * 주소 참조 연산자
	// cout << *p.getArea() << endl; // 잘못!!!
	cout << p->getArea() << endl; 

	return 0;
}
