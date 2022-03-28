#include "timeStamp.h"
#include <iomanip>

int timeStamp::daysNum(int m) const
{
	switch (m) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		return 31;
	case 4: case 6: case 9: case 11:
		return 30;
	case 2:
		if (this->year % 400 == 0 || (this->year % 4 == 0 && this->year % 100 != 0))
			return 29;
		else
			return 28;
	default:
		return -1;
	}
}

ostream& operator<<(ostream& os, const timeStamp& ts)
{
	os <<   ts.day << "." << 
		ts.month << "." << 
		ts.year << "-" 
		 << ts.hour << ":" 
		 << ts.min;
	return os; 
}
