

 1. 강의 순서

     friend 키워드 설명

     Money 클래스를 통해 연산자 중복에 대한 동기 부여
     일반 함수로만 정의하고
     friend 키워드 사용

     멤버 함수로 연산자 중복 정의 

     ++, -- 연산자 중복 정의

     기타 연산자 중복 정의에서 고려할 점

     컴파일러가 일반함수와 멤버함수에서 연산자 중복을 찾는 방법

     연산자 중복 관련 연습문제 풀이

     함수 중복 해결에서 고려했던 자동 형 변환 다시 언급
     클래스 생성자에 의한 자동 형 변환을 고려한 연산자 중복 해결

   [샘플 예제]
     if (m3 == Money(0, 0))
	     cout << "0달러 0센트" << endl;

     int x, y, z;

     cout << x << y;
     cin >> x >> y >> z;

     Money m1, m2, m3;

     cout << m1 << m2; 
     cin >> m1 >> m2 >> m3;

     cin >> x >> y; // x달러, y센트
     m1 = Money(x,y);
     cin >> x >> y; // x달러, y센트
     m2 = Money(x,y);
     cin >> x >> y; // x달러, y센트
     m3 = Money(x,y);

     cout << m1;  // << 출력 연산자, cout 첫번째 피연산자. m1 두번째 피연산자

     cout << m1 << m2; ==> (cout << m1) << m2;

      ostream& cout;
      isteram& cin;

      1 + 2 + 3 ==> (1 + 2) + 3

      ostream& operator<<(ostream& out, const Money& m1)



=======

[Exercise]
공유자료실에 제공된 소스 코드 Money.h와 Money.cpp (지난 강의시간에 작성했던)를 활용해도 됩니다.
main.cpp는 아래 테스트 프로그램을 참고하여 새로 작성하세요.

아래 실습 문제에 대한 프로그램을 작성하고 테스트 프로그램을 실행하시오.
제출 방법:
    Money.h  Money.cpp  main.cpp  outcome.txt  파일을 ZIP으로 압축하고 파일명은 학번_이름.zip.

 [실습] Money 클래스 연산자 오버로딩 작성
 - 입출력 연산자(<<, >>)
  - 덧셈 연산자(+)
  - 이진 마이너스(-) 연산자
 - 음수로 만드는 마이너스(-) 연산자
 - 같은지 테스트하는 연산자(==)
  - 할당 연산자

[테스트 프로그램]
Money m1, m2, m3;
 cin >> m1 >> m2;
 cout << m1 << m2;
 cout << (m1 == m2);
 m3 = m1 + m2;
 cout << m3;
 m3 = m1 - m2;
 cout << m3;
 m3 = -m3;
 cout << m3;
 m3 = m1 = m2;
 cout << m3;





