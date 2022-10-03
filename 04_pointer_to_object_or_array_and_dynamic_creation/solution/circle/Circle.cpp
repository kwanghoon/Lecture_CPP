// Circle.cpp
#include <iostream>
using namespace std;

#include "Circle.h"


// 기본 생성자
Circle::Circle() : Circle(0) {
        cout << "The basic constructor is called" << endl;
}

// 일반 생성자
Circle::Circle(int radius) {
	cout << "A constructor is called: " << radius << endl;
	this->radius = radius; 
	(*this).radius = radius;
}

// 복사 생성자
Circle::Circle(const Circle& circle) {
        cout << "The copy constructor is called" << endl;
        this->radius = circle.radius;
}

// 소멸자
Circle::~Circle() {
        cout << "The deconstructor is called" << endl;
}

// 할당 연산자
Circle& Circle::operator=(const Circle& circle) {
        cout << "The assignment operator is called" << endl;
        this->radius = circle.radius;
	return *this;
}

// 일반 멤버함수
double Circle::getArea() {
	return 3.14 * this->radius * this->radius;
}

void Circle::setRadius(int r) {
	this->radius = r;
}
