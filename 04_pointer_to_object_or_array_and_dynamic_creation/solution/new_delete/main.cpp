#include <iostream>
using namespace std;

int main() {
	int x; // 스택(stack)에 int 저장 공간을 마련
	int* pint = new int;  // 힙(heap)에 int 저장 공간을 마련
	int* qint = new int(123); // new 연산자

	int numOfData;
	cin >> numOfData;
	int* parr = new int[numOfData];  // new [] 연산자
	for (int i = 0; i < numOfData; i++) {
		cin >> parr[i];
	}

	for (int i = 0; i < numOfData; i++) {
		cout << parr[i] << endl;
	}

	delete pint; // delete 연산자
	delete qint;
	
	delete[] parr; // delete [] 연산자

	return 0;
}

