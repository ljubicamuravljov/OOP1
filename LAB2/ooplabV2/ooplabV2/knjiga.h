#ifndef _knjiga_h_
#define _knjiga_h_

#include<iostream>
#include<string>
using namespace std;

class Knjiga {
	string naziv, autor;
	static int ids;
	int id;


public:
	Knjiga(string n = "", string aut = "") :naziv(n), autor(aut),id(ids) { ids++; }
	string getnaziv() const { return naziv; }
	string getaut() const { return autor; }
	int getId() const { return id; }

	friend Knjiga* operator!(const Knjiga& k1);
	friend ostream& operator<<(ostream& os, Knjiga* k);

	Knjiga(const Knjiga& k1) = delete;
	Knjiga& operator=(const Knjiga& b1) = delete;
};



#endif