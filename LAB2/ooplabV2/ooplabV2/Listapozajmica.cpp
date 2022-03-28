#include "Listapozajmica.h"

ListaP& ListaP::operator+=(const Pozajmica& p)
{	if (!prvi) {
		prvi = new Elem(p);
		return *this;
	}
Elem* tren = prvi;
Elem* pred = nullptr;
while (tren->next) {
	pred = tren;
	tren = tren->next;
}
pred->next = new Elem(p);

return *this;
}

Pozajmica* ListaP::dohv(Knjiga* k)
{
	ListaP::Elem* tren = prvi;
	while (tren) {
		if (tren->poz->dohK() == k) return tren->poz;
		tren = tren->next;

	}
	return nullptr;


	
}

ListaP& ListaP::operator-=(const Pozajmica& p)
{
	if (prvi->poz == &p) {
		prvi = prvi->next;
		delete(prvi);
		return *this;

	}
	Elem* tren = prvi;
	Elem* pred = nullptr;
	while (tren->next) {
		
		if (tren->poz == &p) {
			pred->next = tren->next;
			delete(tren);
		}
		pred = tren;
		tren = tren->next;
	}
	return *this;
}

ostream& operator<<(ostream& os, const ListaP& l)
{
	ListaP::Elem* tren = l.prvi;
	while (tren) {
		os << (*tren->poz);
		tren = tren->next;
	}
	return os;



}
