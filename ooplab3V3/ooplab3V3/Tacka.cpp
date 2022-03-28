
#include "Tacka.h"
bool Tacka::operator==(const Tacka t)
{
	return (x==t.x && y==t.y);
}

ostream& operator<<(ostream& os, const Tacka& t)
{
	return os << "(" << t.x << "," << t.y << ")";
}
