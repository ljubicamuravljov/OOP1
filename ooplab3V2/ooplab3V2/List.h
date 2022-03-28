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
		Elem(const T& p, Elem* n = nullptr):el(p) {
			 next = n;
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


	//DA LI OVDE I CONST VERZIJA
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
