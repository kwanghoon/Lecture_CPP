#include <iostream>
using namespace std;

#include "IntPair.h"
#include "CharPair.h"
#include "Function.h"

int main() {
  // IntPair
  {
    IntPair a(1,2);

    cout << "a(1,2)" << endl;

    IntPair b = (a++)++;
    cout << "(a++)++ : " << b.getFirst() << ", " << b.getSecond() << endl;
  }

  // CharPair
  {
    CharPair a;
    a[1] = 'A';
    a[2] = 'B';

    cout << "a[1] = " << a[1] << endl;
    cout << "a[2] = " << a[2] << endl;

    cout << "Enter a[1]: ";
    cin >> a[1];

    cout << "Enter a[2]: ";
    cin >> a[2];

    cout << "a[1] = " << a[1] << endl;
    cout << "a[2] = " << a[2] << endl;
  }

  // Function
  {
     Function f;
     A a(10);
     B b(20);

     cout << "a = " << a.get() << endl;
     cout << "b = " << b.get() << endl;

     cout << "a = f(b)" << endl;
     a = f(b);

     cout << "a = " << a.get() << endl;
  }
  
}
