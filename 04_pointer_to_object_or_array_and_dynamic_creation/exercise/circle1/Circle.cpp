// Circle.cpp
#include "Circle.h"

double Circle::getArea() {
	return 3.14 * this->radius * this->radius;
}

void Circle::setRadius(int r) {
	this->radius = r;
}