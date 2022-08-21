#include <iostream>
using namespace std;

#include "Circle.h"

int main() {
	cout << "�����ϰ����ϴ� ���� ����? ";
	int n;
	cin >> n; // ���� ����
	Circle* pCirArr = new Circle[n]; // new [] ������
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "��° ���� ������? ";
		int radius;
		cin >> radius;
		pCirArr[i].setRadius(radius);
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "��° ���� ����: "
			<< pCirArr[i].getArea() << endl;
	}

	delete[] pCirArr; // delete [] ������
}


int exercise2() {
	int x; // ����(stack)�� int ���� ������ ����
	int* pint = new int;  // ��(heap)�� int ���� ������ ����
	int* qint = new int(123); // new ������

	int numOfData;
	cin >> numOfData;
	int* parr = new int[numOfData];  // new [] ������
	for (int i = 0; i < numOfData; i++) {
		cin >> parr[i];
	}
	// do something with parr
	delete pint; // delete ������
	delete qint;
	
	delete[] parr; // delete [] ������
}


int exercise1() {
	Circle donut;
	Circle pizza(30);
	cout << donut.getArea() << endl;

	Circle* p = & donut; // & �ּ� ������
	cout << (*p).getArea() << endl; // * �ּ� ���� ������
	// cout << *p.getArea() << endl; // �߸�!!!
	cout << p->getArea() << endl; 

	Circle circleArr[3] = {
		Circle(10), Circle(20), Circle(30)
	};

	return 0;
}