#pragma once
// Circle.h
#include <iostream>
using namespace std;

class Circle {
	// Circle* this; 
	int radius;
	char garbage;
public:
	Circle() : Circle(0) { } // 기본 생성자
	Circle(int r) {  // (일반) 생성자
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


