//  main.cpp
#include <iostream>
using namespace std;

#include "node.h"

void printCycle(Node* list) {
	Node* current = list;
	do {
		cout << current->getName() << " ";
		current = current->getNext();
	} while (current != list);
	cout << endl;
}

int main() {
  
        // 1) 군인 숫자를 입력 받음
	cout << "How many our forces? ";
	int N;
	cin >> N;

        // 2) N명의 군인이 둥그렇게 배치되도록 원형 리스트를 구성
	Node* next = new Node(N);
	Node* last = next;

	for (int i = N-1; i >=1; i--) {
		Node* ptr = new Node(i);  // 이름이 i인 객체를 생성
		ptr->setNext( next );
		next = ptr;
	}

	last->setNext(next);

        // 3) list를 1번 군인을 가리키게 하고 
        //    현재 군인으로 가정
	Node* list = next;   // next 가 숫자 1인 노드

	printCycle(list);


        // 4) 요세푸스 문제 풀이에 따라 한 명씩 kill하며 그 과정을 화면에 출력
        //    

	// 처음에 N명의 군인이 있음
	int count = N;

        // 1명이 남을 때까지 반복

	while (count > 1) {
		/* 완성하시오 */ ;  // 현재 위치 list의 옆(next)를 kill하고
                                   // list가 옆의 옆(next의 next)를 가리키도록 함

		printCycle(list);  // kill하여 업데이트된 리스트를 화면에 출력

		/* 완성하시오 */ ;  // 현재 위치 list를 앞서 설정된 list의 옆(next)으로 설정

		count--;
	}
	return 0;
}

