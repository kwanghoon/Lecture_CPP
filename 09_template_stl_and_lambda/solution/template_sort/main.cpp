#include <iostream>
using std::cout;
using std::endl;

#include "sort.h"

class MyClassWithNoComparison {  // with no support for operator<
};

int main() {

  // (1) sort integer array
  int a[10] = { 9, 8, 7, 6, 5, 1, 2, 3, 0, 4 };
  cout << "Given" << endl;
  print( a, 10 );
  sort ( a, 10 ); // 형 매개변수 T에 int를 대입한 경우
  cout << "after sorting" << endl;
  print( a, 10 );


  // (2) sort double array
  double b[5] = { 5.5, 4.4, 1.1, 3.3, 2.2 };
  cout << "Given" << endl;
  print( b, 5 );
  sort ( b, 5 ); // 형 매개변수 T에 double을 대입한 경우
  cout << "after sorting" << endl;
  print( b, 5 );

  
  // (3) sort character array
  char c[7] = { 'G', 'E', 'N', 'E', 'R', 'I', 'C' };
  cout << "Given" << endl;
  print( c, 7 );
  sort ( c, 7 ); // 형 매개변수 T에 char를 대입한 경우
  cout << "after sorting" << endl;
  print( c, 7 );
  
  // (4) sort MyClassWithNoComparison array
  MyClassWithNoComparison arr[10];
  // sort(arr, 10);
  
  return 0;
  
}
