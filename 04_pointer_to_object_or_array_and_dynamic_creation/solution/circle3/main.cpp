#include <iostream>
using namespace std;

#include "Circle.h"

int main() {
	Circle donut(15);

	cout << donut.getArea() << endl;

        // (1) & �ּ� �����ڷ� donut ��ü�� �ּҸ� ������ ���� p�� ����
	Circle* p = & donut; 

        // (2) ������ ���� p�� ����Ű�� Circle ��ü�� ���� (getArea)
        //
        //      (*p).getArea() vs. *p.getArea() vs. p->getArea()
	cout << p->getArea() << endl; 

	return 0;
}
