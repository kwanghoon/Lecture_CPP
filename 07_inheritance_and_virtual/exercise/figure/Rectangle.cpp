#include <iostream>
using namespace std;

#include "Rectangle.h"

Rectangle::Rectangle(double width, double height) : Rectangle(0,0,width,height) {
}

Rectangle::Rectangle(double x, double y, double width, double height) {
  this->x = x;
  this->y = y;
  this->width = width;
  this->height = height;

  cout << "Rectangle of width " << this->width << " and " << " height " << this->height
       << " is created at " << this->x << " and " << this->y << endl;

}

void Rectangle::draw() {
  cout << "Rectangle of width " << width
       << " and height " << height
       << " is drawn at (" << x << ", " << y << ")" << endl;
}
