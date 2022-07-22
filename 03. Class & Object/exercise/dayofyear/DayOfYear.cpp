#include "DayOfYear.h"
#include <iostream>

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
	cout << "month : " << month << "," << "day:" << day << endl;
}

int DayOfYear::getMonthNumber()
{
	return month;
}