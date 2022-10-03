#include <iostream>
using namespace std;

#include "Figure.h"

void Figure::center() {
  // 640 x 480 화면을 가정할 때 중심 좌표
  x = 320;
  y = 240;

  this->draw();   // 이 this가 가리키는 객체는 무엇일까?
}
