#include "Function.h"

A::A(int a) {
  this->a = a;
}

int A::get() {
  return this->a;
}



B::B(int b) {
  this->b = b;
}

int B::get() {
  return this->b;
}


A Function::operator() (B b) {
  return A( b.get() );
}

