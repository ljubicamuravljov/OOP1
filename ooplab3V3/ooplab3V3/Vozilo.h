#ifndef _Vozilo_h_
#define _Vozilo_h_

#include <string>
#include "Put.h"
#include <iostream>
using namespace std;
class Vozilo {

protected:

	string naziv;
	int startnacena;
	virtual void pisi(ostream& os) const;
public:
	static double cenaPoJedinici;
	virtual ~Vozilo(){}
	Vozilo(string n) :naziv(n){}
	
	virtual double cena(Put& p);
	friend ostream& operator<<(ostream& os, const Vozilo& v);

	virtual void setStart()=0;
};


class obicnoVozilo :public Vozilo {


public:
	obicnoVozilo(string n) :Vozilo(n) {
		setStart();
	}
	void setStart() override {
		startnacena = 120;
	}
};

#endif
