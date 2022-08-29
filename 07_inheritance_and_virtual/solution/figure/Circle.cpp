#include <iostream>
using namespace std;

#include "Circle.h"

Circle::Circle( double radius ) : Circle (0,0,radius) {
}

Circle::Circle( double x, double y, double radius) {
  this->x = x;
  this->y = y;
  this->radius = radius;

  cout << "Circle of radius " << this->radius 
       << " is created at " << this->x << " and " << this->y << endl;
}


void Circle::draw() {
  cout << "Circle of radius " << radius 
       << " is drawn at (" << x << ", " << y << ")" << endl;
}

