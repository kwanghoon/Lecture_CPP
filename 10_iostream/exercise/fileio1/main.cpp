#include <iostream>
#include <fstream>
using namespace std;

int main() {

  /* 완성하시오 */ inStream;  // 입력 파일 객체 선언 
  /* 완성하시오 */ outStream; // 출력 파일 객체 선언

  inStream. /* 완성하시오 */ ("infile.txt");       // 입력 파일 열기
  outStream.open            ( /* 완성하시오 */ );  // 출력 파일 열기

  string word;

  while ( /* 완성하시오 */  )          // 입력 파일의 끝에 도달할 때까지 단어(word)를 반복해서 읽고
    /* 완성하시오 */ << word << " ";   // 이 단어를 출력 파일에 공백으로 구분해서 출력

  inStream.close();             // 입력 파일 닫기
  outStream. /* 완성하시오 */ ;  // 출력 파일 닫기

  return 0;
}
