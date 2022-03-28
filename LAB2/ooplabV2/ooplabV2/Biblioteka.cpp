#include "Biblioteka.h"


Biblioteka& Biblioteka::operator+=(const Knjiga& k1)
{
	if (brK == maxK) return *this;
	brK++;
	if (!prvi) {
		prvi = new Elem(!k1);
		return *this;
	}
	
	Elem* tren = prvi,*pred=nullptr;
	while (tren->next) {
		pred = tren;
		tren = tren->next;
	}
	tren->next = new Elem(!k1);
	return *this;

}

Knjiga* Biblioteka::dohvatiKnjigu(int ind)
{
	/*if (ind > brK) {
		cout << "Ne postoji knjiga";
		Knjiga* k = new Knjiga();
		return *k;
	}*/
	Elem* tren = prvi;
	while(tren) {
		if (tren->knjiga->getId() == ind) { return tren->knjiga; }
		tren = tren->next;
	}
	cout << "Ne postoji knjiga";
	return nullptr;
}
Biblioteka& Biblioteka::operator=(const Biblioteka& b1)
{
		if (this != &b1) {
		brisi();
		kopiraj(b1);
	}
	return *this;
}
Biblioteka& Biblioteka::operator=(Biblioteka&& b1)
{
		if (this != &b1) {
		brisi();
		premesti(b1);
	}
	return *this;
}
ostream& operator<<(ostream& os,const Biblioteka& bib) {
	
	os << "BIBLIOTEKA " << bib.nazivB();
	os << " " << bib.brojKnjiga();
	os << "/" << bib.maxKnjiga() << endl;

	Biblioteka::Elem* tren = bib.prvi;
	while (tren) {
		if (tren->knjiga) {
			os << (tren->knjiga) << endl;
		}
		else {
			os << "?" << endl;
		}
		tren = tren->next;
	}
	os << bib.tekuca << endl;
	os << bib.istorija;
	return os;


}
void Biblioteka::pozajmi(int i, Datum dat) {

	Elem* tren = prvi;
	while (tren) {
		if (tren->knjiga->getId() == i)
		{
			Pozajmica p(tren->knjiga, dat);
			tren->knjiga = nullptr;
			tekuca += p;
		}
		tren = tren->next;
	}


}
void Biblioteka::vrati(Knjiga* k, Datum datv) {




}