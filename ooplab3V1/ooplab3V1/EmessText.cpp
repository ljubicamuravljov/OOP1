#include "EmessText.h"

void EmessText::write(ostream& os) const
{
	Emess::write(os);
	os << txt;
	
}

EmessText* EmessText::copy() const
{
	return new EmessText(*this);
}

ostream& operator<<(ostream& os, const EmessText& emt)
{
	emt.write(os);
	return os;
}
