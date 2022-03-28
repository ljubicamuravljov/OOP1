#ifndef _Posiljka_h_
#define _Posiljka_h_
#include <iostream>
#include "Artikal.h"
//#include "Rukovalac.h"
#include "List.h"
#include <string>
#include <exception>

class GNoDetalj : public exception {
public:
	GNoDetalj():exception("***Nisu izracunati detalji posiljke!"){}
	
};
class GIzrDet : public exception {
public:
	GIzrDet():exception("***Vec su izracunati detalji posiljke!"){}
	
};
using namespace std;

class Rukovalac;
struct Detalji {
	int danicekanja=0;
	double cena=0;

//	Detalji(int d,int c):danicekanja(d),cena(c){}
	//Detalji() = default;
};

class Posiljka {

	static int ids;
	int id;
	Artikal* art;
	Detalji detalji;
	List<Rukovalac*> listaruk;
	bool izracunata=false;

	friend class Prodavac;
	friend class Rukovalac;
public:
	Posiljka(Artikal* a):art(a) {
		id = ids;
		ids++;
	}
	//Posiljka(const Posiljka& p) {
	//	id = ids;
	//	ids++;
	//	art = p.art;
	//	detalji = p.detalji;
	//	listaruk = p.listaruk;
	//}
	//Posiljka(Posiljka&& p) {
	//	id = ids;
	//	ids++;
	//	art = p.art;
	//	detalji = p.detalji;
	//	listaruk = p.listaruk;
	//}

	//Posiljka& operator=(const Posiljka& p) {
	//	if (this != &p) {
	//		art = p.art;
	//		detalji = p.detalji;
	//		listaruk = p.listaruk;
	//	}
	//	return *this;

	//}
	//Posiljka& operator=(Posiljka&& p) {
	//	if (this != &p) {
	//		art = p.art;
	//		detalji = p.detalji;
	//		listaruk = p.listaruk;
	//	}
	//	return *this;
	//}
	Posiljka& operator+=(Rukovalac* ruk);
	Artikal* getArt() const { return art; }

	int getId() const { return id; }
	
	Detalji getDetalji() const { 
		if (detalji.cena == 0 && detalji.danicekanja == 0) throw GNoDetalj();
		return detalji; 
	
	}
	void izrDetalje();

	friend ostream& operator<<(ostream& os, const Posiljka& p);

};


#endif // !_Posiljka_h_
