#include <iostream>
using namespace std;

#include "Circle.h"

int main() {
	cout << "How many circles to create?  ";
	int n; // ���� ����

        // (1) ���� ������ ���� n�� �Է� �ޱ�
	cin >> n; 

        // (2) new [] �����ڷ� n���� Circle ��ü �迭�� ����
	Circle* pCirArr = new Circle[n]; 

	for (int i = 0; i < n; i++) {
		cout << "Circle " << i + 1 << "'s radius? ";

                // (2-1) �� Circle�� �������� �Է� �޾� ���� setRadius
		int radius;
		cin >> radius;
		pCirArr[i].setRadius(radius);
	}

        // (3) �� Circle�� ������ ���� ���
	for (int i = 0; i < n; i++) {
		cout << "Circle " << i + 1 << "'s area: "
			<< pCirArr[i].getArea() << endl;
	}

        // (4) delete [] �����ڷ� �ռ� ���� �迭�� ����
	delete[] pCirArr; 

	return 0;
}

