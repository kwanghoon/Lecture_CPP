#include <iostream>
using namespace std;

#include "Circle.h"

int main() {
	cout << "생성하고자하는 원의 갯수? ";
	int n;
	cin >> n; // 원의 갯수
	Circle* pCirArr = new Circle[n]; // new [] 연산자
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 원의 반지름? ";
		int radius;
		cin >> radius;
		pCirArr[i].setRadius(radius);
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 원의 넓이: "
			<< pCirArr[i].getArea() << endl;
	}

	delete[] pCirArr; // delete [] 연산자
}


int exercise2() {
	int x; // 스택(stack)에 int 저장 공간을 마련
	int* pint = new int;  // 힙(heap)에 int 저장 공간을 마련
	int* qint = new int(123); // new 연산자

	int numOfData;
	cin >> numOfData;
	int* parr = new int[numOfData];  // new [] 연산자
	for (int i = 0; i < numOfData; i++) {
		cin >> parr[i];
	}
	// do something with parr
	delete pint; // delete 연산자
	delete qint;
	
	delete[] parr; // delete [] 연산자
}


int exercise1() {
	Circle donut;
	Circle pizza(30);
	cout << donut.getArea() << endl;

	Circle* p = & donut; // & 주소 연산자
	cout << (*p).getArea() << endl; // * 주소 참조 연산자
	// cout << *p.getArea() << endl; // 잘못!!!
	cout << p->getArea() << endl; 

	Circle circleArr[3] = {
		Circle(10), Circle(20), Circle(30)
	};

	return 0;
}