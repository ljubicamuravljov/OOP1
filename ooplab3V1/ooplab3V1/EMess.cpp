#include "EMess.h"

ostream& operator<<(ostream& os, const Emess& em)
{
	em.write(os);
	return os;
}
void Emess::write(ostream& os) const
{
	os << title << endl;
	os << *sender << endl << *reciever << endl;
	
}
