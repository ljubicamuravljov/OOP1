#define _CRTDBG_MAP_ALLOC
#ifndef _rec_h_
#define _rec_h_

#include "skup.h"


class Rec {

	string rec;

	static Skup sam, son;

public:
	Rec(string r) {
		
		rec = "";
		for (int i = 0; i < r.size(); i++) {

			if (isalpha(r[i])) rec += r[i];

		}

	}
	int operator+();
	int operator~() ;
	int operator()(int n);
	friend ostream& operator<<(ostream& os,const Rec& r);
	friend istream& operator>>(istream& is, Rec& r);
	bool operator^(Rec& rec2);
	bool provera(int i);
};


#endif