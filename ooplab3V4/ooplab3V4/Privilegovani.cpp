
#include "Privilegovani.h"
void Privilegovani::pisi(ostream& os) const
{
	bool prvi = true;
	os << naziv;
	os << "(" << minv << ")";
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
void Privilegovani::dodajIgr(Igrac* ig, int poz)
{

	if (ig->getVrednost() < minv) throw GVrednost();

	Tim::dodajIgr(ig, poz);
}

ostream& operator<<(ostream& os, const Privilegovani& p)
{
	p.pisi(os);
	return os;
}
