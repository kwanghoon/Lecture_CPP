#ifndef RECTANGLE_H
#define RECTANGLE_H

#include /* 완성하시오 */   // Circle의 기반 클래스를 선언한 헤더 파일

class Rectangle /* 완성하시오 */  {
public:
  Rectangle(double width, double height);
  Rectangle(double x, double y, double width, double height);
  void draw();

private:
  double width, height; // 너비, 높이
};

#endif // RECTANGLE_H
