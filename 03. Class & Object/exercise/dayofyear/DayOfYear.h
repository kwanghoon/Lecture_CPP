#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

class DayOfYear
{
	int month;
	int day;
	
public:
	DayOfYear(int monthValue, int dayValue);
	DayOfYear(int monthValue);
	DayOfYear();

	void output();
	int getMonthNumber();

	~DayOfYear();

};
#endif
