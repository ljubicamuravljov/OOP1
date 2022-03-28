#ifndef _Put_h_
#define _Put_h_
#include "List.h"
#include "Tacka.h"
#include <exception>

class GTackaUputu :public exception {

public:
	GTackaUputu() :exception("***Greska Tacka vec u putu! ") {}

};

class Put {
	List<Tacka> listat;


public:
	void operator+=(const Tacka& t);
	double duzina();
	friend ostream& operator <<(ostream& os, const Put& p);
};


#endif // !_Put_h_
