
Figure를 기반 클래스로 두 개의 자식 클래스 Circle과 Rectangle을 둔다.

Figure 클래스에 다음의 멤버를 포함시킨다.
 - x,y 좌표 
 - center()    
 - draw()      cf. 가상 멤버함수이고, 실제 구현 코드는 없는 추상 멤버함수.

center() 멤버함수는 x,y 좌표를 화면의 중심으로 이동. 
즉 640x480을 가정하고 (320,240)으로 x,y를 설정.
그 다음 draw() 멤버 함수를 호출하면 
이때 this가 가리키는 객체의 실제 draw 함수가 호출되어
Circle 또는 Rectangle을 그린다는 메시지를 출력한다.

Circle 클래스는 다음의 멤버를 갖는다.
 - radius
 - draw()


Rectangle 클래스는 다음의 멤버를 갖는다.
 - width, height
 - draw()


