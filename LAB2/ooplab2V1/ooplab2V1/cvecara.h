
#ifndef _cvecara_h_
#define _cvecara_h_

#include "buket.h"


class Cvecara {
	int zarada,brB;
	struct Elem {
		Buket* buk;
		Elem* next;

		Elem(Buket* bukk, Elem*n=nullptr):buk(bukk),next(n){}


	};

	Elem* prvi = nullptr;
	void brisi() {
		Elem* pom = prvi; Elem* pred = nullptr;
		while (pom) {
			pred = pom;
			pom = pom->next;
			delete(pred->buk);
			delete(pred);
		}
		
	}
	void kopiraj(const Cvecara& c1) {
		if (this == &c1) return;
		Buket* buk = new Buket(*c1.prvi->buk);
		prvi = new Elem(buk);
		zarada = c1.zarada;
		Elem* pom1 = c1.prvi;
		Elem* tren = prvi;
		while (pom1->next) {
			Buket* buk = new Buket(*pom1->next->buk);
			tren->next = new Elem(buk);
			pom1 = pom1->next;
			tren = tren->next;

		}

	}
	void premesti(Cvecara& c1) {
		prvi = c1.prvi;
		zarada = c1.zarada;
		Elem* pom1 = c1.prvi,*pred1=nullptr;
		Elem* tren = prvi;
		while (pom1->next) {

			tren->next = pom1->next;
			pred1 = pom1;
			pom1 = pom1->next;
			pred1 = nullptr;
			tren = tren->next;

		}

	}
public:
	Cvecara():zarada(1000),brB(0){}
	Cvecara(const Cvecara& c1) {
		kopiraj(c1);
	}
	Cvecara(Cvecara&& c1) {
		premesti(c1);
	}
	~Cvecara() {
		brisi();
	}
	Cvecara& operator=(const Cvecara& c1);
    Cvecara& operator=(Cvecara&& c1);
	void dodajBuk(Buket* bukk);
	void prodaja(int poz);
	friend ostream& operator<<(ostream& os, const Cvecara& cvec);
};


#endif