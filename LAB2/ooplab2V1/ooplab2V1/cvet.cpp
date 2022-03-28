
#include "cvet.h"



ostream& operator<<(ostream& os,const Cvet *c1)
{
	
	os << c1->dohnaz();
	return os;

}

bool operator==(const Cvet&c1,const Cvet& c2)
{
	return c2.dohnaz() == c1.dohnaz();

	
}


bool operator!=(const Cvet&c1,const Cvet&c2)
{
	return c2.dohnaz() != c1.dohnaz();
}
