입력 끝에 도달할 때까지 반복해서 입력을 받아 단어의 수를 세어 출력하는
프로그램을 작성하시오.

참고) string line, word;
 
      while ( cin.eof() == false )  {
         getline(cin, line);

         ...

         istringstream ist(line);
         while ( ist >> word ) {
            ...
         }

         ...

      }


입출력 형식은 input.txt와 output.txt를 참고한다.
