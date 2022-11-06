#include <iostream>
using std::cout;
using std::endl;

#include "pair.h"

class myClassWithNoPlus {
};

int main() {

  // (1) integer pair
  Pair<int> score;
  score.setFirst(3);
  score.setSecond(0);

  cout << "Given" << endl;
  cout << "(" << score.getFirst() << ", "
       << score.getSecond() << ")" << endl;

  cout << "addUp returns " << score.addUp() << endl;
    
  /*  완성하시오  */  score1(7,5);
  
  cout << "Given" << endl;
  cout << "(" << score1.getFirst() << ", "
       << score1.getSecond() << ")" << endl;

  cout << "addUp returns " << score1.addUp() << endl;
  
  // (2) character pair
  Pair<char> seats;
  seats.setFirst('A');
  seats.setSecond('B');

  cout << "Given" << endl;
  cout << "(" << seats.getFirst() << ", "
       << seats.getSecond() << ")" << endl;
  
  cout << "addUp returns " << seats.addUp() << endl;
  
  /*  완성하시오  */  seats1('Z','K');
  
  cout << "Given" << endl;
  cout << "(" << seats1.getFirst() << ", "
       << seats1.getSecond() << ")" << endl;
  
  cout << "addUp returns " << seats1.addUp() << endl;

  // (3) something without +
  Pair<myClassWithNoPlus> p;

  // p.addUp();  // compilation error!
  
  return 0;
}
