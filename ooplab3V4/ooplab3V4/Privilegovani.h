#ifndef _Privilegovani_h_
#define _Privilegovani_h_
#include "Tim.h"
#include <exception>


class GVrednost :public exception {
public:
	GVrednost() :exception("***Greska vrednost igraca manja od minimuma! ") {}
};

class Privilegovani :public Tim {
	int minv;
protected:
	void pisi(ostream& os) const override;

public:
	Privilegovani(string n, int max, int min) :minv(min), Tim(max, n) { trenigr = 0; }
	void dodajIgr(Igrac* ig, int poz) override;
	friend ostream& operator<<(ostream& os, const Privilegovani& p);
};

#endif