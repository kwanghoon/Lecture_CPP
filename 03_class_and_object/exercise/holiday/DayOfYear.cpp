#include <iostream>
#include "DayOfYear.h"

using namespace std;

DayOfYear::DayOfYear(int monthValue, int dayValue)
{
	cout << "DayOfYear (" << monthValue << "," << dayValue << ") is called." << endl;
	month = monthValue;
	day = dayValue;
}

DayOfYear::DayOfYear(int monthValue) :DayOfYear(monthValue, 1)
{
	cout << "DayOfYear(" << monthValue << ") is called" << endl;
}

DayOfYear::DayOfYear() :DayOfYear(1, 1)
{
	cout << "DayOfYear() is called" << endl;
}

DayOfYear::~DayOfYear()
{
	cout << "~DayOfYear() is called" << endl;
}

void DayOfYear::output()
{
  switch(month) {
    case 1:
        cout << "January "; break; 
    case 2:
        cout << "February "; break; 
    case 3:
        cout << "March "; break;
    case 4:
        cout << "April "; break;
    case 5:
        cout << "May "; break; 
    case 6:
        cout << "June "; break; 
    case 7:
        cout << "July "; break; 
    case 8:
        cout << "August "; break; 
    case 9:
        cout << "September "; break;
    case 10:
        cout << "October "; break; 
    case 11:
        cout << "November "; break; 
    case 12:
        cout << "December "; break; 
    default:
	cout << "Error in DayOfYear::output. Contact software vendor.";
  }

  cout << day;
}

int DayOfYear::getMonthNumber()
{
	return month;
}

void DayOfYear::testDate() 
{
        if (month < 1 || month > 12) {
           cout << "Illegal month value!\n";
           exit(1);
        }

        if (day < 1 || day > 31) {
           cout << "Illegal day value!\n";
           exit(1);
        }
}

