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
  
        // 1) ���� ���ڸ� �Է� ����
	cout << "How many our forces? ";
	int N;
	cin >> N;

        // 2) N���� ������ �ձ׷��� ��ġ�ǵ��� ���� ����Ʈ�� ����
	Node* next = new Node(N);
	Node* last = next;

	for (int i = N-1; i >=1; i--) {
		Node* ptr = new Node(i);  // �̸��� i�� ��ü�� ����
		ptr->setNext( next );
		next = ptr;
	}

	last->setNext(next);

        // 3) list�� 1�� ������ ����Ű�� �ϰ� 
        //    ���� �������� ����
	Node* list = next;   // next �� ���� 1�� ���

	printCycle(list);


        // 4) �似Ǫ�� ���� Ǯ�̿� ���� �� �� kill�ϸ� �� ������ ȭ�鿡 ���
        //    

	// ó���� N���� ������ ����
	int count = N;

        // 1���� ���� ������ �ݺ�

	while (count > 1) {
		/* �ϼ��Ͻÿ� */ ;  // ���� ��ġ list�� ��(next)�� kill�ϰ�
                                   // list�� ���� ��(next�� next)�� ����Ű���� ��

		printCycle(list);  // kill�Ͽ� ������Ʈ�� ����Ʈ�� ȭ�鿡 ���

		/* �ϼ��Ͻÿ� */ ;  // ���� ��ġ list�� �ռ� ������ list�� ��(next)���� ����

		count--;
	}
	return 0;
}

