#include <iostream>
#include /* �ϼ��Ͻÿ� */      // string ������ ==�� ����ϱ� ���� �ʿ��� ��� ����

using namespace std;


int main() {
        string input;
	string s1, s2, s3;    // ���ڿ� ���� s1, s2, s3�� ����   cf. char s1[SIZE], s2[SIZE], s3[SIZE];

        /* �ϼ��Ͻÿ�.  */     // input ���ڿ� ������ �ܾ �Է� ����

	/* �ϼ��Ͻÿ�.  */     // s1�� "hello"�� ����.      cf. strcpy(s1, "hello")
	/* �ϼ��Ͻÿ�.  */     // s2�� input�� ����.        cf. strcpy(s2, input)
	/* �ϼ��Ͻÿ�.  */     // s1�� s2�� �ٿ� s3�� ����.  cf. strcat(s1, s2, s3) ���ڿ� ����(concatenation)

	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;

	string s4("ants");    // ���ڿ� ���� s4�� �����ϵ�,  "ants"�� ������ s4�� �ʱ�ȭ
	string s5(s4);        // ���ڿ� ���� s5�� �����ϵ�, s4�� ������ s5�� �ʱ�ȭ

	if ( /* �ϼ��Ͻÿ� */ ) {   // s4�� s5�� ������ Ȯ���ϴ� ����   cf. strcmp(s4,s5)==0
		cout << "s4 == s5" << endl;
	}


	return 0;
}
