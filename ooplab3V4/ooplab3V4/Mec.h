#ifndef _Mec_h_
#define _Mec_h_
#include "Par.h"
#include "Tim.h"
#include< exception>

class GNijeOdigran :public exception {

public:
	GNijeOdigran():exception("***Nije Odigran Mec!"){}

};

class Mec {
public:
	enum Ishodi{POBEDA_DOMACIN,NERESENO,POBEDA_GOST};

private:
	int poenidom, poenigos;
	Par<Tim> partimova;
	enum Ishodi ishod;
	bool odigran = false;
	Par<int> parpoena;

public:

	Mec(Tim* dom, Tim* gos):partimova(dom,gos),parpoena(0,0) {

	}

	Par<Tim> getTimove() const { return partimova; }
	Ishodi getIshod() const { return ishod; }
	Par<int> getParPoena() const { 
		if (!odigran) throw GNijeOdigran();
		return parpoena; }

	void Odigraj();
		
	bool mecOdigran() const { return odigran; }

	friend ostream& operator<<(ostream& os, const Mec& m);
};


#endif

