#ifndef CIRCLE_H
#define CIRCLE_H

#include /* 완성하시오 */   // Circle의 기반 클래스를 선언한 헤더 파일

class Circle /* 완성하시오 */  {
public:
  Circle( double radius );
  Circle( double x, double y, double radius );
  void draw();

private:
  double radius;  // 반지름
};

#endif // CIRCLE_H
