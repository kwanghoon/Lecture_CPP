#include <iostream>
using namespace std;

#include "Pet.h"
#include "Dog.h"

int main() {
  // (1) Slice problem
  Dog value_dog;
  Pet value_pet;

  value_dog.name = "Tiny";
  value_dog.breed = "Great Dane";

  value_pet = value_dog;  // OK
  // cout << value_pet.breed; // Not OK

      // main.cpp:16:21: error: ‘class Pet’ has no member named ‘breed’
      //    16 |   cout << value_pet.breed; // Not OK
      //       |                     ^~~~~

  value_pet.print();  // Q1. 출력 결과?


  // (2) Solution with virtual
  Dog* ptr_dog;
  Pet* ptr_pet;

  ptr_dog = new Dog;
  ptr_dog->name = "Tiny";
  ptr_dog->breed = "Great Dane";

  ptr_pet = ptr_dog; // OK
  ptr_pet->print();  // Q2. 출력 결과?

  return 0;
}
