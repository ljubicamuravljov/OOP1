#ifndef _Artikal_h_
#define _Artikal_h_

#include <iostream>
#include <string>

using namespace std;


class Artikal {

	string naziv;
	int barkod;
	double nabavnaCena;

public:
	Artikal(string n, int bk, double nC) :naziv(n), barkod(bk), nabavnaCena(nC){}

	string getNaziv() const { return naziv; }
	int getBarKod() const { return barkod; }
	double getNCena() const { return nabavnaCena; }
	bool operator==(Artikal& art2);
};


#endif // !_Artikal_h_
