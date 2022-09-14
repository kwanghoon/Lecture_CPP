#ifndef HOLIDAY_H
#define HOLIDAY_H

#include "DayOfYear.h"

class Holiday {
public:
  Holiday();  // initialize to January 1st with no parking enforcement
  Holiday(int month, int day, bool theEnforcement);
  void output();

private:
  /* 완성하시오 */  date;
  bool parkingEnforcement; // true if enforced.

};

#endif
