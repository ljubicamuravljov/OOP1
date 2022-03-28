#include "User.h"

ostream& operator<<(ostream& os, const User& user)
{
	os << "(" << user.name << ")" << user.addr;
	return os;

	// TODO: insert return statement here
}
