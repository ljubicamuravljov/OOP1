
#include "buket.h"


Buket& Buket::operator=(const Buket& b1)
{
	 if (this != &b1) {
        brisi();
        kopiraj(b1);
    }
    return *this;
}

Buket& Buket::operator=(Buket&& b1)
{
	if (this != &b1) {
		brisi();
		premesti(b1);
	}
	return *this;
}

void Buket::dodajCvet(Cvet* c1)
{

	Cvet* c = new Cvet(*c1);
	if (!prvi) prvi = new Elem(c);
	else {
		Elem* pred = nullptr, * tren = prvi;
		while (tren && tren->cvet->dohnaz()< c->dohnaz()) {

			pred = tren;
			tren = tren->next;

		}
		if (!pred) {
			prvi = new Elem(c);
			prvi->next = tren;
			return;
		}
		pred->next = new Elem(c);
		pred->next->next = tren;
			



	}


}

int Buket::nabCena() const
{
	int nc=0;
	Elem* pom = prvi;
	while (pom) {
		nc += pom->cvet->dohnc();
		pom = pom->next;
	}
	return nc;
}

int Buket::prodCena() const
{
	int pc=0;
	Elem* pom = prvi;
	while (pom) {
		pc += pom->cvet->dohpc();
		pom = pom->next;
	}
	return pc;
}

int Buket::zarada() const
{
	return this->prodCena() - this->nabCena();
}

bool Buket::operator<(const Buket* b2)
{
	return this->prodCena() < b2->prodCena();
}
ostream& operator<<(ostream& os, const Buket& b1) {

	os << "(";
	Buket::Elem* pred = nullptr, * pom = b1.prvi;
	if (!pom) {
		os << ")" << b1.prodCena() << "RSD";
		return os;
	}
	os << pom->cvet;
	pred = pom;
	pom = pom->next;
	while (pom) {
		
		if (*pred->cvet != *pom->cvet) { os << ", " << pom->cvet; }
		pred = pom; pom = pom->next;


	}
	os << ")" << b1.prodCena() << "RSD";
	return os;

}
