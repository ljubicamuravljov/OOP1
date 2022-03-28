#include "Put.h"

void Put::operator+=(const Tacka& t)
{
	for (int i = 0; i < listat.size(); i++) {
		if (listat[i] == t) throw GTackaUputu();
	}
	listat += t;

}

double Put::duzina()
{

	double duz = 0;
	for (int i = 0; i < listat.size() - 1; i++) {

		duz += listat[i].udaljenost(listat[i + 1]);
	}
	return duz;
	
}

ostream& operator<<(ostream& os, const Put& p)
{
	int i;
	for ( i = 0; i < p.listat.size()-1; i++) {
		os << p.listat[i]<<endl;
	}
	os << p.listat[i];
	return os;

}
