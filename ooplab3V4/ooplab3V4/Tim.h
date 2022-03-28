#ifndef _Tim_h_
#define _Tim_h_
#include "Igrac.h"

class Tim {
protected:
	string naziv;
	int maxigr;
	int trenigr;
	//double vrednost;
	Igrac** nizigraca;

	void brisi() {

		delete[] nizigraca;
	}

	void kopiraj(const Tim& t) {
		naziv = t.naziv;
		maxigr = t.maxigr;
		trenigr = t.trenigr;

		nizigraca = new Igrac * [maxigr];

		for (int i = 0; i < maxigr; i++) {
			nizigraca[i] = t.nizigraca[i];
		}

	}
	void premesti(Tim& t) {
		naziv = t.naziv;
		maxigr = t.maxigr;
		trenigr = t.trenigr;
		nizigraca = t.nizigraca;
		t.nizigraca = nullptr;
	}
	virtual void pisi(ostream& os) const;

public:
	Tim(int m,string n) :maxigr(m),naziv(n) { 
		nizigraca = new Igrac * [maxigr];
		trenigr = 0;// vrednost = 0;
		for (int i = 0; i < maxigr; i++) {
			nizigraca[i] = nullptr;
		}
	
	}
	Tim(const Tim& t) {
		kopiraj(t);
	}
	Tim(Tim&& t) {
		premesti(t);
	}


	Tim& operator=(const Tim& t) {
		if (this != &t) {
			brisi();
			kopiraj(t);

		}
		return *this;
	}
	Tim& operator==(Tim&& t) {
		if (this != &t) {
			brisi();
			premesti(t);

		}
		return *this;
	}

	//void setvrednost(double v) { vrednost = v; }
	
	virtual ~Tim() { brisi(); }
	virtual void dodajIgr(Igrac* ig, int poz);
	
	int trenIgr() const { return trenigr; }
	double getvrednost() const;
	int getMaxIgr() const { return maxigr; }
	

	Igrac* operator[](int i);
	const Igrac* operator[](int i) const;
	bool operator==(const Tim& t);
	friend ostream& operator<<(ostream& os, const Tim& t);
};


/*

#ifndef _List_h_
#define _List_h_
#include <iostream>
#include <string>
#include <exception>

using namespace std;

class GNoCurr : public exception {
public:

	GNoCurr() :exception("***Ne postoji podatak!"){}
};

template<typename T>
class List {

	struct Elem {
		T el;
		Elem* next;
		Elem(const T& p, Elem* n = nullptr) {
			el = p; next = n;
		}
	};
	Elem* head, * tail;
	int num;




	void del();
	void copy(const List& l);
	void move(List& l) {
		head = l.head;
		tail = l.tail;
	
		l.head = l.tail = nullptr;
	}

public:
	int size() const { return num; }
	List() {
		head = tail =  nullptr;
		num = 0;
	}

	List(const List& l) {
		copy(l);
	}

	List(List&& l) {
		move(l);
	}

	List& operator=(const List& l) {
		if (this != &l) {
			del();
			copy(l);
		}
		return *this;
	}
	List& operator=(List&& l) {
		if (this != &l) {
			del();
			move(l);
		}
		return *this;
	}
	~List() { del(); }

	List& operator +=(const T& t) {
		tail = (!head ? head : tail->next) = new Elem(t);
		num++;
		return *this;

	}



	T& operator[](int i)  {
		return const_cast<T&>(const_cast<const List&>(*this)[i]);
	}
	const T& operator[](int i) const {
		Elem* pom = head;
		if (i >= num || i<0 )throw GNoCurr();
		for (int j = 0; j < i; j++) {
			pom = pom->next;
		}

		if (!pom) throw GNoCurr();
		return pom->el;
	}


};

template <typename T>
void List<T>::del() {

	while (head) {
		Elem* old = head;
		head = head->next;
		delete old;
	}
	tail = nullptr;
}


template<typename T>
void List<T>::copy(const List& l) {
	head = tail=nullptr;
	for (Elem* temp = l.head; temp; temp = temp->next) {
		tail = (!head ? head : tail->next) = new Elem(temp->el);
	}
}
#endif


*/



#endif // !_Tim_h_
