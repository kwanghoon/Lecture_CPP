#ifndef FIGURE_H
#define FIGURE_H

class Figure {
public:
  /* 완성하시오 */  void draw() /* 완성하시오 */ ;  // 가상 함수, 구현 코드가 없는 함수
  void center();

protected:
  double x, y;   // Screen size: 640 x 480
                 // The center is (320,240)
};

#endif // FIGURE_H
