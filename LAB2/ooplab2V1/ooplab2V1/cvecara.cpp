
#include "cvecara.h"




Cvecara& Cvecara::operator=(const Cvecara& c1)
{
	if (this != &c1) {
		brisi();
		kopiraj(c1);
	}
	return *this;
}

Cvecara& Cvecara::operator=(Cvecara&& c1)
{
	if (this != &c1) {
		brisi();
		premesti(c1);
	}
	return *this;
}

void Cvecara::dodajBuk(Buket* bukki)
{

	Buket* bukk = new Buket(*bukki);
	Elem* nov = new Elem(bukk);
	
	if (bukk->zarada() < 0.2*bukk->nabCena()) return;
	zarada -= bukk->nabCena();
	Elem * tren = prvi;
	if (!prvi) {
		prvi = nov; brB++; return;
	}
	else {
		Elem* pred = nullptr, * tren = prvi;
		while (tren && tren->buk->prodCena() < bukk->prodCena()) {
			pred = tren;
			tren = tren->next;

		}
		if (!pred) {
			prvi = nov;
			prvi->next = tren;
			return;
		}
		pred->next = nov;
		pred->next->next = tren;
			
		brB++;
	}

}

void Cvecara::prodaja(int poz)
{
	if (poz > brB || poz < 1) {
		cout << "Nevalidna pozicija";
		return;
	}
	Elem* tren = prvi,* pred = nullptr;
	if (poz == 1) {
		prvi = tren->next;
		zarada += tren->buk->prodCena();
		delete(tren);
		return;
	}
	for (int i = 1; i < poz; i++) {
		pred = tren;
		tren = tren->next;
	}
	pred->next = tren->next;
	zarada += tren->buk->prodCena();
	delete(tren);
	return;

}
ostream& operator<<(ostream& os, const Cvecara& cvec) {
	os << "zarada=" << cvec.zarada << "RSD" << endl;
	Cvecara::Elem* tren = cvec.prvi;
	while (tren) {
		os << *tren->buk << endl;
		tren = tren->next;
	}
	return os;



}
