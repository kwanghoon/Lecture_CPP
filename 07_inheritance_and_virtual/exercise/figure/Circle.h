#ifndef CIRCLE_H
#define CIRCLE_H

#include "Figure.h"

class Circle : public Figure {
public:
  Circle( double radius );
  Circle( double x, double y, double radius );
  void draw();

private:
  double radius;  // 반지름
};

#endif // CIRCLE_H
