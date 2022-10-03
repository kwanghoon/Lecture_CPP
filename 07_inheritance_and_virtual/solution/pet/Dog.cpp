#include <iostream>
#include <sstream>  // ostringstream
using namespace std;

#include "Dog.h"

string Dog::print() const {
  ostringstream oss;

  oss << "name: " << name << endl;
  oss << "breed: " << breed << endl;

  cout << oss.str(); 

  return oss.str();
}
