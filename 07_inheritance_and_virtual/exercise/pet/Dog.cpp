#include <iostream>
using namespace std;

#include "Dog.h"

void Dog::print() const {
  cout << "name: " << name << endl;
  cout << "breed: " << breed << endl;
}
