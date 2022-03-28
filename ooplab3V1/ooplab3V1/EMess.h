#ifndef _Emess_h_
#define _Emess_h_
#include <iostream>
#include <string>
#include "User.h"
using namespace std;


class Emess {
public:
	
	enum Status{IN_PROCESS, SENT, RECIEVED};
	
protected:
	User* sender, * reciever;
	//string status;
	string title;
	
	enum Status status;

	virtual void write(ostream& os) const;
	
public:
	virtual Emess* copy() const = 0;
	virtual void sendMess() = 0;

	Emess(User* s, User* r, string t) {
		sender = s;
		reciever = r;
		title = t;
		status = Status::IN_PROCESS;
	}
	virtual ~Emess(){}
	
	User* getsender() const { return sender; }
	User* getreciever() const { return reciever; }
	Status getstatus() const { return status; }
	string gettitle() const { return title; }

	friend ostream& operator<<(ostream& os, const Emess& em);

};




#endif // !_Emess_h_
