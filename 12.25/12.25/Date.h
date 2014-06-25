#ifndef DATE_H_
#define DATE_H_

#include <string>
#include <ctime>

class Date{
private:
	int year;
	int month;
	int day;

public:
	Date();
	Date(int elapseTime);
	Date(int newYear, int newMonth, int newDay);

	int getYear();
	int getMonth();
	int getDay();

	void setDate(int elapseTime);

};


int findCurrentMonth(int currentDay);
int findCurrentDay(int Month, int Day);
int findCurrentYear(int Days);

#endif