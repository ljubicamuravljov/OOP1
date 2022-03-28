#ifndef _Pozajmica_h_
#define _Pozajmica_h_
#include "knjiga.h"
#include "Datum.h"

class Pozajmica {

	Knjiga* knjiga;
	Datum poc, kraj;
	bool izvrsena;
public:

	Pozajmica(Knjiga* k, Datum dp):knjiga(k),poc(dp),izvrsena(false) {}
	Knjiga* dohK() const { return knjiga; }
	bool operator~();
	friend ostream& operator<<(ostream& os, const Pozajmica& p);

};


#endif
