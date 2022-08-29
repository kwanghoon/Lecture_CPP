#include <iostream>
using namespace std;

#include "Circle.h"
#include "Rectangle.h"


int main() {

  // 1) 반지름(radius)를 입력받아 Circle 객체를 만들기
  double radius;

  cout << "Enter a radius of circle: ";
  cin >> radius;

  Circle circle(radius);

  // 2) 너비(width)와 높이(height)를 입력받아 Rectangle 객체를 만들기
  double width, height;

  cout << "Enter a width and a height of rectangle: ";
  cin >> width >> height;

  Rectangle rectangle(width, height);

  // 3) Circle 객체와 Rectangle 객체를 화면 중심으로 이동하여 그리기
  //    Figure.center()를 호출하면 이 멤버 함수 안에서 draw()를 호출하므로
  //    여기에서는 center()만 호출하면 됨
  circle.center();

  rectangle.center();


  return 0;
}
