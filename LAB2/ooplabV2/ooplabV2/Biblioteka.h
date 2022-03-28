#ifndef _biblioteka_h_
#define _biblioteka_h_

//#include "knjiga.h"
#include "Listapozajmica.h"

class Biblioteka {
	string naziv;
	int brK, maxK;
	ListaP istorija,tekuca;
	struct Elem {
		Knjiga* knjiga;
		Elem* next;

		Elem(Knjiga* k1, Elem* n = nullptr) :knjiga(k1), next(n) {}

	};
	Elem* prvi = nullptr;

	void kopiraj(const Biblioteka& b1){
		if (this == &b1) return;
	    prvi = new Elem(!(*b1.prvi->knjiga));
		Elem* pom1 = b1.prvi;
		brK = b1.brK;
		naziv = b1.naziv;
		maxK = b1.maxK;
		Elem* tren = prvi;
		while (pom1->next) {

			tren->next = new Elem(!(*pom1->next->knjiga));
			pom1 = pom1->next;
			tren = tren->next;

		}
	}
	void premesti(Biblioteka &b1) {
		prvi = b1.prvi;
		brK = b1.brK;
		maxK = b1.maxK;
		b1.prvi = nullptr;
		
		naziv = b1.naziv;

	/*	while (pom1->next) {

			tren->next = pom1->next;
			pred1 = pom1;
			pom1 = pom1->next;
			pred1 = nullptr;
			tren = tren->next;

		}*/

	}
	void brisi() {

		Elem* pom = prvi; Elem* pred = nullptr;
		while (pom) {
			pred = pom;
			pom = pom->next;
			delete(pred->knjiga);
			delete(pred);
		}
	/*	delete(pom);
		delete(pred);*/

	}


public:
	Biblioteka(string naz = "", int max = 0) :naziv(naz), maxK(max), brK(0) {}

	Biblioteka(const Biblioteka& b1) {
		kopiraj(b1);
	}
	Biblioteka(Biblioteka&& b1) {
		premesti(b1);
	}
	~Biblioteka() {
		brisi();
	}

	Biblioteka& operator=(const Biblioteka& b1);
    Biblioteka& operator=(Biblioteka&& b1);

	void pozajmi(int i,Datum dat);

	string nazivB()const { 
		return naziv;
	}
	int brojKnjiga() const { return brK; }
	int maxKnjiga() const { return maxK; }

	Biblioteka& operator+=(const Knjiga& k1);
	Knjiga* dohvatiKnjigu(int ind);
	void vrati(Knjiga* k, Datum datv);
	friend ostream& operator<<(ostream& os, const Biblioteka& bib);


};


#endif