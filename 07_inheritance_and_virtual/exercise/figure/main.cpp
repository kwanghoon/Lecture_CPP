#include <iostream>
using namespace std;

#include "Circle.h"
#include "Rectangle.h"


int main() {

  double radius;
  double width, height;


  cout << "Enter a radius of circle: ";
  cin >> radius;

  Circle circle(radius);

  cout << "Enter a width and a height of rectangle: ";
  cin >> width >> height;

  Rectangle rectangle(width, height);

  circle.center();

  rectangle.center();


  return 0;
}
