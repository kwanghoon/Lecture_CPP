#pragma once
// Circle.h
#include <iostream>
using namespace std;

class Circle {
	// Circle* this; 
	int radius;
	char garbage;
public:
	Circle() : /* 완성하시오 */ { } // 기본 생성자
	Circle(int r) {  // (일반) 생성자
		/* 완성하시오 */ ;
		this->radius = r; 
		(*this).radius = r;
	}
	double getArea();
	void setRadius(int r);
	~Circle() {
		/* 완성하시오 */ ;
	}

};


