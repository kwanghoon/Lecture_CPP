#include <iostream>
using namespace std;

#include "CharPair.h"

CharPair::CharPair() : CharPair(' ', ' ') { }

CharPair::CharPair(char f, char s) : first(f), second(s) { }

char& CharPair::operator[](int index) {
  if (index == 1) return this->first;
  else if(index == 2) return this->second;
  else {
    cout << "Illegal index: " << index << endl;
    exit(1);
  }
}
