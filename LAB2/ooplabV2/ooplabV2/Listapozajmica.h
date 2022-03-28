#ifndef _Listapozajmica_h_
#define _Listapozajmica_h_
#include "Pozajmica.h"
class ListaP {

	struct Elem {
		Pozajmica* poz;
		Elem* next;

		Elem(Pozajmica p,Elem*n=nullptr) {
			poz = &p; next = n;
		}


	};
	void kopiraj(const ListaP& l1) {
		
		//Buket* buk = new Buket(*c1.prvi->buk);
		prvi = new Elem(*l1.prvi->poz);
		
		Elem* pom1 = l1.prvi;
		Elem* tren = prvi;
		while (pom1->next) {
			Pozajmica* poz = new Pozajmica(*pom1->next->poz);
			tren->next = new Elem(*poz);
			pom1 = pom1->next;
			tren = tren->next;

		}

	}
	Elem* prvi = nullptr;
public:
	ListaP(){}
	ListaP(ListaP& l) { kopiraj(l); }
	ListaP& operator+=(const Pozajmica& p);
	Pozajmica* dohv(Knjiga* k);
	ListaP& operator-=(const Pozajmica& p);
	friend ostream& operator<<(ostream& os,const ListaP& l);
};


#endif
