#include <iostream>
#include /* 완성하시오 */  // DayOfYear 클래스를 포함한 헤더 파일 

using namespace std;

DayOfYear::DayOfYear(int monthValue, int dayValue)
{
	cout << "DayOfYear (" << monthValue << "," << dayValue << ") is called." << endl;

        // 완성하시오
}

DayOfYear::DayOfYear(int monthValue) : /* 초기화 섹션을 완성하시오. 기본적으로 1일을 지정 */
{
	cout << "DayOfYear(" << monthValue << ") is called" << endl;
}

DayOfYear::DayOfYear() : /* 초기화 섹션을 완성하시오. 기본적으로 1월 1일을 지정 */
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
	// 월에 대한 getter 함수를 완성하시오.
}
