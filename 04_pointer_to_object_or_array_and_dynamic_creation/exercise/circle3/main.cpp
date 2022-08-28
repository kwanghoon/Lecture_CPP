#include <iostream>
using namespace std;

#include "Circle.h"

int main() {
	Circle donut(15);

	cout << donut.getArea() << endl;

        // (1) & 주소 연산자로 donut 객체의 주소를 포인터 변수 p에 저장

	Circle* p = /* 완성하시오 */  ; 

        // (2) 포인터 변수 p가 가리키는 Circle 객체의 면적 (getArea)
        //
        //      (*p).getArea() vs. *p.getArea() vs. p->getArea()

	cout << /* 완성하시오 */ << endl; 


	return 0;
}
