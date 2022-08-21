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
	cout << "�Ʊ��� ����? ";
	int N;
	cin >> N;

	Node* next = new Node(N);
	Node* last = next;

	for (int i = N-1; i >=1; i--) {
		Node* ptr = new Node(i);  // �̸��� i�� ��ü�� ����
		ptr->setNext( next );
		next = ptr;
	}

	last->setNext(next);

	Node* list = next;   // next �� ���� 1�� ���

	printCycle(list);

	int count = N;

	while (count > 1) {
		list->setNext(list->getNext()->getNext());
		printCycle(list);
		list = list->getNext();
		count--;
	}
	return 0;
}

