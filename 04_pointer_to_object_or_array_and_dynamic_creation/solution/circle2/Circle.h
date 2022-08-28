#pragma once
// Circle.h
#include <iostream>
using namespace std;

class Circle {
	// Circle* this; 
	int radius;
	char garbage;
public:
	Circle() : Circle(0) { } // 扁夯 积己磊
	Circle(int r) {  // (老馆) 积己磊
		cout << "A constructor is called: " << r << endl;
		this->radius = r; 
		(*this).radius = r;
	}
	double getArea();
	void setRadius(int r);
	~Circle() {
		cout << "A deconstructor is called" << endl;
	}

};


