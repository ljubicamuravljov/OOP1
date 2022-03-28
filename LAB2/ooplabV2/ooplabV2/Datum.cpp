#include "Datum.h"
ostream& operator<<(ostream& os, const Datum& d)
{
	if (d.dan < 10) os << 0;
	os << d.dan<<'.';
	if (d.mesec < 10) os << 0;
	os << d.mesec << '.';
	os << d.godina<<'.';
	return os;
}
