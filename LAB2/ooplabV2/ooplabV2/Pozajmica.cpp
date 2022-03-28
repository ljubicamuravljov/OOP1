#include "Pozajmica.h"
bool Pozajmica::operator~()
{
return izvrsena;
}

ostream& operator<<(ostream& os, const Pozajmica& p)
{
	os << p.poc<<"-";
	if (p.kraj.getgod() != 1970) { os << p.kraj; }
	return os;
}
