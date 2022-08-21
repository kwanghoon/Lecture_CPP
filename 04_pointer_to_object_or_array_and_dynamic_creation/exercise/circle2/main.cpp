#include <iostream>
using namespace std;

#include "Circle.h"

int main() {
	Circle donut;
	Circle pizza(30);
	cout << donut.getArea() << endl;

	Circle* p = & donut; // & �ּ� ������
	cout << (*p).getArea() << endl; // * �ּ� ���� ������
	// cout << *p.getArea() << endl; // �߸�!!!
	cout << p->getArea() << endl; 

	Circle circleArr[3] = {
		Circle(10), Circle(20), Circle(30)
	};

	return 0;
}
