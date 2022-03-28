#include "Tim.h"
void Tim::pisi(ostream& os) const
{
	bool prvi = true;
	os << naziv;
	os << "[";
	for (int i = 0; i < maxigr; i++) {
		if (nizigraca[i]) {
			if (prvi) {
				os << *nizigraca[i];
				prvi = false;
			}
			else {
				os << ", " << *nizigraca[i];
			}
		}
	}
	os << "]";
}
void Tim::dodajIgr(Igrac* ig, int poz)
{
	int pomvr;
	if (poz<0 || poz>= maxigr) { return; }
	if (nizigraca[poz] == nullptr) { trenigr++;  }

	nizigraca[poz] = ig;
	
	
}

double Tim::getvrednost() const
{
	double vrednost=0;
	for (int i = 0; i < maxigr; i++) {
		if (nizigraca[i]) {
			vrednost += nizigraca[i]->getVrednost();
		}

	}

	return vrednost / trenigr;
}

//DODAJ CONST CAST
Igrac* Tim::operator[](int i)
{
	if (i >= 0 && i < maxigr) {

		return nizigraca[i];
	}
	return nullptr;
}

const Igrac* Tim::operator[](int i) const
{
	if (i >= 0 && i < maxigr) {
		return nizigraca[i];
	}
	return nullptr;
}


bool Tim::operator==(const Tim& t)
{
	if (naziv == t.naziv && maxigr == t.maxigr) {
		for (int i = 0; i < maxigr; i++) {
			if (nizigraca[i] == nullptr && t.nizigraca[i] == nullptr) continue;
			else if (nizigraca[i] == nullptr || t.nizigraca[i] == nullptr) return false;
			if (!(*nizigraca[i] == *t.nizigraca[i])) {
				return false;
			}
		}
		return true;
	}
	else { return false; }
}

ostream& operator<<(ostream& os, const Tim& t)
{
	t.pisi(os);
	return os;

	
}
