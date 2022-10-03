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
  
  Circle(Circle& circle);
  Circle& operator=(const Circle& circle);
  ~Circle();
  
  double getArea();
  int getRadius();
  void setRadius(int r);
  
};


