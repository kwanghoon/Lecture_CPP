#include <iostream>
using namespace std;

#include "Circle.h"

int main() {
	cout << "How many circles to create?  ";
	int n; // 원의 갯수

        // (1) 원의 갯수를 변수 n에 입력 받기
	cin >> n; 

        // (2) new [] 연산자로 n개의 Circle 객체 배열을 생성
	Circle* pCirArr = new Circle[n]; 

	for (int i = 0; i < n; i++) {
		cout << "Circle " << i + 1 << "'s radius? ";

                // (2-1) 각 Circle의 반지름을 입력 받아 설정 setRadius
		int radius;
		cin >> radius;
		pCirArr[i].setRadius(radius);
	}

        // (3) 각 Circle의 면적을 구해 출력
	for (int i = 0; i < n; i++) {
		cout << "Circle " << i + 1 << "'s area: "
			<< pCirArr[i].getArea() << endl;
	}

        // (4) delete [] 연산자로 앞서 만든 배열을 삭제
	delete[] pCirArr; 

	return 0;
}

