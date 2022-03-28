#include"Vozilo.h"
double Vozilo::cenaPoJedinici = 0.1;
void Vozilo::pisi(ostream& os) const
{
	os << naziv;
}
double Vozilo::cena(Put& p)
{
	return startnacena + p.duzina() * cenaPoJedinici;
}

ostream& operator<<(ostream& os, const Vozilo& v)
{
	v.pisi(os);
	return os;
}
