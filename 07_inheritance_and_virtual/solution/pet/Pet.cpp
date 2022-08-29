#include <iostream>
#include <sstream>   // ostringstream
using namespace std;

#include "Pet.h"

string Pet::print() const {
  ostringstream oss;

  oss << "name: " << name << endl;
  cout << oss.str();

  return oss.str();
}
