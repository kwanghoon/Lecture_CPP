#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;


// 입력 스트림에 대한 일반적인 함수
int sum(istream& number_source) {
  int n, total;

  total = 0;
  while (number_source >> n) 
    total = total + n;

  return total;
}

// 출력 스트림에 대한 일반적인 함수
string sayHello(ostream& target) {
  ostringstream oss;  // just for debugging
  oss << "Hello";     // just for debugging

  target << "Hello";

  return oss.str();   // just for debugging
}

int main() {

  // 1) 입력 스트림 (키보드, 파일, 문자열)
  ifstream inStream("infile.txt");  // 입력 파일 객체 선언하고 열기
  istringstream istrStream( "123 456 789" );


  cout << "sum from cin: "           << sum ( cin )        << endl;
  cout << "sum from infile.txt: "    << sum ( inStream )   << endl;
  cout << "sum from string stream: " << sum ( istrStream ) << endl;


  inStream.close();   // 입력 파일 닫기


  // 2) 출력 스트림 (화면, 파일, 문자열)
  ofstream outStream("outfile.txt");  // 출력 파일 객체 선언하고 열기
  ostringstream ostrStream;

  cout << "sayHello to cout: "          << sayHello( cout )       << endl;
  cout << "sayHello to outfile.txt: "   << sayHello( outStream )  << endl;
  cout << "sayHello to string stream: " << sayHello( ostrStream ) << endl;

  outStream.close();

  return 0;
}
