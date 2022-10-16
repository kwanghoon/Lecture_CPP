#include "IntPair.h"

IntPair::IntPair(int f, int s) {
  this->first = f;
  this->second = s;
}

IntPair IntPair::operator++() {
  this->first++;
  this->second++;

  return IntPair(this->first, this->second);
}

IntPair IntPair::operator++(int d) {
  int first = this->first;
  int second = this->second;
  
  this->first++;
  this->second++;

  return IntPair(first, second);
}
