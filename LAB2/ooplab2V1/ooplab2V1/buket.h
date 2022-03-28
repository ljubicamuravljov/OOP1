
#ifndef _buket_h_
#define _buket_h_

#include "cvet.h"


class Buket {

	struct Elem {
		Cvet* cvet;
		Elem* next;

		Elem(Cvet* c1, Elem*n=nullptr):cvet(c1),next(n){}


	};
	Elem* prvi = nullptr;
	void brisi(){
	Elem* pom = prvi; Elem* pred = nullptr;
		while (pom) {
			pred = pom;
			pom = pom->next;
			delete(pred->cvet);
			delete(pred);
		}
		
		}
	void kopiraj(const Buket& b1){
		if (this == *b1) return;
		Cvet* c =new Cvet(*b1.prvi->cvet);
		prvi = new Elem(c);
		Elem* pom1 = b1.prvi;
		Elem* tren = prvi;
		while (pom1->next) {
			Cvet *c = new Cvet(*pom1->next->cvet);
			tren->next = new Elem(c);
			pom1 = pom1->next;
			tren = tren->next;

		}
	}
	void premesti(Buket& b1){
		prvi = b1.prvi;
	/*	Elem* pom1 = b1.prvi,*pred1=nullptr;
		Elem* tren = prvi;*/
		b1.prvi = nullptr;
		/*while (pom1->next) {

			tren->next = pom1->next;
			pred1 = pom1;
			pom1 = pom1->next;
			pred1 = nullptr;
			tren = tren->next;

		}*/
	}
public:
	Buket() {}
	Buket& operator=(const Buket& b1);
    Buket& operator=(Buket&& b1);
	Buket(const Buket& b1){
		kopiraj(b1);
	}
	Buket(Buket&& b1){
		
		premesti(b1);
		
	}
	~Buket() {
		brisi();
	}
	void dodajCvet(Cvet* c);
	int nabCena() const;
	int prodCena() const;
	int zarada() const;
	bool operator<(const Buket* b2);
	friend ostream& operator<<(ostream& os,const Buket& b1);
};



#endif