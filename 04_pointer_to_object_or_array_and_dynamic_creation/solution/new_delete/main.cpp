#include <iostream>
using namespace std;

int main() {
	int x; // ����(stack)�� int ���� ������ ����
	int* pint = new int;  // ��(heap)�� int ���� ������ ����
	int* qint = new int(123); // new ������

	int numOfData;
	cin >> numOfData;
	int* parr = new int[numOfData];  // new [] ������
	for (int i = 0; i < numOfData; i++) {
		cin >> parr[i];
	}

	for (int i = 0; i < numOfData; i++) {
		cout << parr[i] << endl;
	}

	delete pint; // delete ������
	delete qint;
	
	delete[] parr; // delete [] ������

	return 0;
}

