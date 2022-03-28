
#ifndef _cvet_h_
#define _cvet_h_

#include <iostream>
#include<string>
using namespace std;


class Cvet {
	string naziv;
	int nab, prod;

public:
	Cvet(string im="", int nc=0, int pc=0) : naziv(im), nab(nc), prod(pc) {} 

	string dohnaz() const { return naziv; }
	int dohnc() const { return nab; }
	int dohpc() const { return prod; }
	int zarada() const { return prod - nab; }

	friend ostream& operator<<(ostream& os, const Cvet *c1);
	friend bool operator==(const Cvet&c1,const Cvet& c2);
	friend bool operator!=(const Cvet&c1, const Cvet&c2);

};




#endif


