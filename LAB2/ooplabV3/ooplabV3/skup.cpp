#define _CRTDBG_MAP_ALLOC
#include "skup.h"

Skup& Skup::operator+=(char c)
{
	if (skup.find(tolower(c)) == -1) skup += tolower(c);
	return *this;
}

bool Skup::operator()(char c)
{
	return skup.find(tolower(c)) != -1;
}
