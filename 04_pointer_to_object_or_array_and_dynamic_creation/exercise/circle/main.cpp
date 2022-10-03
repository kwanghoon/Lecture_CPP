#include <iostream>
using namespace std;

#include "Circle.h"

// 값형 매개변수와 값형 리턴 (value types)
Circle f_value(Circle c) {
  return c;
}

// 참조형 매개변수와 참조형 리턴 (reference types)
Circle& f_ref(Circle& ref_c) {
  return ref_c;
}

// 포인터형 매개변수와 포인터형 리턴  (pointer types)
Circle* f_ptr(Circle* ptr_to_c) {
  return ptr_to_c;
}

int main() {
  Circle donut(15);  // Q. 호출되는 생성자?

  cout << donut.getArea() << endl;

  // (1) & 주소 연산자로 donut 객체의 주소를 포인터 변수 p에 저장 
  Circle* p = & donut; 

  // (2) 포인터 변수 p가 가리키는 Circle 객체의 면적 (getArea)
  //
  //      (*p).getArea() vs. *p.getArea() vs. p->getArea()
  cout << p->getArea() << endl;

  // (3) donut 객체를 이용하여 cir1 객체를 초기화하여 생성하시오.
  /* 완성하시오 */

  cout << "cir1: " << cir1.getArea() << endl; 

  // (4) cir1 객체를 이용하여 cir2 객체를 초기화하여 생성하시오.
  /* 완성하시오 */

  cout << "cir2: " << cir2.getArea() << endl; 

  Circle cir3;

  // (5) cir3에 cir2를 대입하여 초기화하시오. 
  /* 완성하시오 */ 
	
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
