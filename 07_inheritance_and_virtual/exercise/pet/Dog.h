#ifndef DOG_H
#define DOG_H

#include "Pet.h"

class Dog : public Pet {
public:
  string breed;
  virtual string print() const;
};

#endif // DOG_H
