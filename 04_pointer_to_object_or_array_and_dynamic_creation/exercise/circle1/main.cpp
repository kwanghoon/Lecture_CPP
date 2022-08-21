#include <iostream>
using namespace std;

#include "Circle.h"

int main() {
	cout << "How many circles to create?  ";
	int n;

	cin >> n; // 원의 갯수

	Circle* pCirArr = new Circle[n]; // new [] 연산자

	for (int i = 0; i < n; i++) {
		cout << "Circle " << i + 1 << "'s radius? ";
		int radius;
		cin >> radius;
		pCirArr[i].setRadius(radius);
	}

	for (int i = 0; i < n; i++) {
		cout << "Circle " << i + 1 << "'s area: "
			<< pCirArr[i].getArea() << endl;
	}

	delete[] pCirArr; // delete [] 연산자

	return 0;
}

