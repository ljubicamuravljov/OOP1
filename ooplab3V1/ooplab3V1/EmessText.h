#ifndef _EmessText_h_
#define _EmessText_h_

#include "EMess.h"
#include <exception>

class alrSent : public exception {
public:

	alrSent() :exception("***Already sent this message!") {}
};



class EmessText : public Emess {

	string txt;
protected:

	void write(ostream& os) const override;
	EmessText* copy() const override;
public:
	//~EmessText() {}
	EmessText(User* s, User* r, string t):Emess(s,r,t) {
		txt = "";
	}

	void addText(string t) {
		if (status == Status::SENT) throw alrSent();
		txt = t;
	}
	void sendMess() override {
		status = Status::SENT;
	}
	friend ostream& operator<<(ostream& os, const EmessText& emt);
};




#endif // !_EmessText_h_
