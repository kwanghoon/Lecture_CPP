#pragma once
// Circle.h
#include <iostream>
using namespace std;

class Circle {
	// Circle* this; 
	int radius;
public:
  Circle();
  Circle(int r);
  
  /* (1) 복사생성자를 선언하시오 */
  /* (2) 할당 연산자를 선언하시오 */
  /* (3) 소멸자를 선언하시오 */
  
  double getArea();
  int getRadius();
  void setRadius(int r);
  
};


