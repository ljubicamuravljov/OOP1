#ifndef _Datum_h_
#define _Datum_h_
#include <iostream>
#include <string>
using namespace std;


class Datum {
	int dan, mesec, godina;


public:

	Datum(int d = 1, int m = 1, int g = 1970) {
		dan = d; mesec = m; godina = g;
	}
	int getgod()const { return godina; }
	int getdan()const { return dan; }
	int getmes()const { return mesec; }
	friend ostream& operator<<(ostream& os, const Datum& d);



};











#endif