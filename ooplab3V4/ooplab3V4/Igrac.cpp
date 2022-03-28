#include "Igrac.h"

void Igrac::povecajVrednost(double proc)
{
	vrednost += (int)(vrednost * proc / 100);
}

void Igrac::smanjiVrednost(double proc)
{
	vrednost -= (int)(vrednost * proc / 100);
	
}

bool Igrac::operator==(const Igrac& i) const
{
	return (ime == i.ime && vrednost == i.vrednost);
}

ostream& operator<<(ostream& os, const Igrac& i)
{
	
	return os << i.ime << "#" << i.vrednost;
}
