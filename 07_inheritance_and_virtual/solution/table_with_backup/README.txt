
TableBak.cpp의 생성자, 복사생성자, 할당연산자, 소멸자, restore(),
backup()을 완성하시오.

깊은 방식을 사용한다고 가정하자.

기대하는 프로그램 실행 결과는 input.txt와 output.txt를 참고하시오.




Q. main.cpp의 Line 44와 Line 45를

	tb3[0] = "Write this";
	tb3[1] = "with something new";

   다음과 같이 변경한 다음 실행하면 그 결과는 무엇인가?

        tbl3 = tbl1;

   그 결과가 나온 이유에 대해서도 설명하시오. 


Q. main.cpp의 Line 44와 Line 45를

	tb3[0] = "Write this";
	tb3[1] = "with something new";

   다음과 같이 변경한 다음 실행하면 그 결과는 무엇인가?

        tbl3.Table::operator=(tbl1);

   그 결과가 나온 이유에 대해서도 설명하시오. 

