#include <iostream>
using namespace std;

#include "Circle.h"

int main() {
	cout << "How many circles to create?  ";
	int n;

	cin >> n; // ���� ����

	Circle* pCirArr = new Circle[n]; // new [] ������

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

	delete[] pCirArr; // delete [] ������

	return 0;
}

