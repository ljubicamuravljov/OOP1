#ifndef _List_h_
#define _List_h_
#include <iostream>
#include <string>
#include <exception>

using namespace std;

class GNoCurr : public exception {
public:

	GNoCurr() :exception("***No current!") {}
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
	mutable Elem* curr;



	void del();
	void copy(const List& l);
	void move(List& l) {
		num = l.num;
		head = l.head;
		tail = l.tail;
		curr = l.curr;
		l.head = l.tail = l.curr= nullptr;
	}

public:
	List() {
		head = tail = curr = nullptr;
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

	List& add(const T& t) {
		tail = (!head ? head : tail->next) = new Elem(t);
		num++;
		return *this;

	}

	void toFirst() const { curr = head; }
	void toNext() const {
		if (curr) {
			curr = curr->next;
		}
	}
	bool currExists() const {
		return curr != nullptr;
	}
	int size() const { return num; }

	T& getEl() {
		if (!curr) throw GNoCurr();
		return curr->el;
	}
	const T& getEl() const {
		if (!curr) throw GNoCurr();
		return curr->el;
	
	}
	

};

template <typename T>
void List<T>::del() {

	while (head) {
		Elem* old = head;
		head = head->next;
		delete old;
	}
	tail = curr = nullptr;
}


template<typename T>
void List<T>::copy(const List& l) {
	head = tail=curr=nullptr;
	num = l.num;
	for (Elem* temp = l.head; temp; temp = temp->next) {
		tail = (!head ? head : tail->next) = new Elem(temp->el);
		if (temp == l.curr) { curr = tail; }
	}
}
#endif
