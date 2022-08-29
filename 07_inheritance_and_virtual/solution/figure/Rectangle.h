#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Figure.h"

class Rectangle : public Figure {
public:
  Rectangle(double width, double height);
  Rectangle(double x, double y, double width, double height);
  void draw();

private:
  double width, height; // 너비, 높이
};

#endif // RECTANGLE_H
