#ifndef _User_h_
#define _User_h_

#include<iostream>
#include<string>
using namespace std;

class User {
	string name;
	string addr;

public:
	User(string nam, string add) :name(nam), addr(add) {};
	User(const User& a) = delete;
	User& operator=(const User& k) = delete;

	string getname() const { return name; }
	string getaddr() const { return addr ; }
	friend ostream& operator<<(ostream& os, const User& user);





};

#endif // !_Korisnik_h_
