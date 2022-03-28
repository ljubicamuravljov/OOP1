#ifndef _Prodavac_h_
#define _Prodavac_h_
#include "List.h"
#include "Rukovalac.h"
#include "Artikal.h"

class Prodavac :public Rukovalac {
	string naziv;
	struct Trojka {
		Artikal* art;
		double marza;
		int dani;

		Trojka(Artikal* a, double m, int d) :art(a), marza(m), dani(d) {};
	};

	//PROMENI U <Trojka>
	List<Trojka> katalog;

	//void brisi() {

	///*	for (int i = 0; i < katalog.size(); i++) {
	//		delete(katalog[i]);
	//	}*/

	//}
public:
	//~Prodavac() { brisi(); } 
	Prodavac(string n):naziv(n){}
	void Obrada(Posiljka& p) const override;
	void dodajUkat(Artikal* a, double m, int d);
	string getNaziv() const { return naziv; }
};
#endif // !_Prodavac_h_
