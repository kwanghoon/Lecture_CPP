#include <iostream>
using namespace std;

#include "Circle.h"

int main() {
	Circle donut(15);

	cout << donut.getArea() << endl;

        // (1) & 주소 연산자로 donut 객체의 주소를 포인터 변수 p에 저장
	Circle* p = & donut; 

        // (2) 포인터 변수 p가 가리키는 Circle 객체의 면적 (getArea)
        //
        //      (*p).getArea() vs. *p.getArea() vs. p->getArea()
	cout << p->getArea() << endl;

	Circle cir1(donut);

	cout << "cir1: " << cir1.getArea() << endl;

	Circle cir2 = cir1;

	cout << "cir2: " << cir2.getArea() << endl;

	Circle cir3;

	cir3 = cir2;
	
	cout << "cir3: " << cir3.getArea() << endl;

	return 0;
}
