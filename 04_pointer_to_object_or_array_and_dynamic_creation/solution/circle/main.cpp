#include <iostream>
using namespace std;

#include "Circle.h"


// ���� �Ű������� ���� ���� (value types)
Circle f_value(Circle c) {
  return c;
}

// ������ �Ű������� ������ ���� (reference types)
Circle& f_ref(Circle& ref_c) {
  return ref_c;
}

// �������� �Ű������� �������� ����  (pointer types)
Circle* f_ptr(Circle* ptr_to_c) {
  return ptr_to_c;
}

int main() {
	Circle donut(15);

	cout << donut.getArea() << endl;

        // (1) & �ּ� �����ڷ� donut ��ü�� �ּҸ� ������ ���� p�� ����
	Circle* p = & donut; 

        // (2) ������ ���� p�� ����Ű�� Circle ��ü�� ���� (getArea)
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

	f_value(donut);

	Circle& ref = f_ref(donut);

	if (&ref == &donut)
	  cout << "&ref == &donut" << endl;

	Circle* ptr = f_ptr(&donut);

	if (ptr == &donut)
	  cout << "ptr == &donut" << endl;

	return 0;
}
