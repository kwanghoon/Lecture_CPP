#include <iostream>
#include "DayOfYear.h"
#include "Holiday.h"

using namespace std;

Holiday::Holiday() : /* 완성하시오 */ , parkingEnforcement(false) 
  { /* intentially empty */ }

Holiday::Holiday(int month, int day, bool theEnforcement)
  : /* 완성하시오 */, parkingEnforcement(theEnforcement)
  { cout << "Holiday (" << month << ", " << day << ") " << "is called";}

void Holiday::output() {
  date.output();
  cout << endl;

  if(parkingEnforcement) 
    cout << "Parking laws will be enforced.\n";
  else
    cout << "Parking laws will not be enforced.\n";
}
