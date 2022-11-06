#include <iostream>
using std::cout;
using std::endl;

#include "swap.h"


int main() {
  // (1) swap two integers
  int integer1 = 1, integer2 = 2;

  cout << "Given" << endl;
  cout << "integer1=" << integer1 << ", "
       << "integer2=" << integer2 << endl;
  
  swap(integer1, integer2);

  cout << "After swap(integer1,integer2)" << endl;
  cout << "integer1=" << integer1 << ", "
       << "integer2=" << integer2 << endl;

  // (2) swap two characters
  char symbol1 = 'A', symbol2 = 'B';

  cout << "Given" << endl;
  cout << "symbol1=" << symbol1 << ", "
       << "symbol2=" << symbol2 << endl;
  
  swap(symbol1, symbol2);

  cout << "After swap(symbol1,symbol2)" << endl;
  cout << "symbol1=" << symbol1 << ", "
       << "symbol2=" << symbol2 << endl;

  // (3) swap two arrays (compilation error!!)
  int a[10] = {1,2,3,4,5,6,7,8,9,10};
  int b[10] = {10,9,8,7,6,5,4,3,2,1};

  // swap (a, b);
  
  return 0;
}
