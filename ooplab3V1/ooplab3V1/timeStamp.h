#ifndef _timeStamp_h_
#define _timeStamp_h_
#include <iostream>

using namespace std;

class timeStamp {

	int year, month, day, hour, min;


public:
	timeStamp(int y, int m, int d, int h, int mi) {

		year = (y >= 1900 && y <= 2021) ? y : 1900;
		month = (m >= 1 && m<= 12) ? m : 1;
		day = (d >= 1 && d <= daysNum(month)) ? d : 1;
		hour = (h >= 0 && h < 24) ? h : 0;
		min = (m >= 0 && m <= 59) ? m : 0;

	}

	int daysNum(int m) const;

	friend ostream& operator<<(ostream& os, const timeStamp& ts);

};


#endif // !_timeStamp_h_
