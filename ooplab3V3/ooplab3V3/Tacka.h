#ifndef _Tacka_h_
#define _Tacka_h_

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Tacka {
public:


	Tacka(int xx,int yy):x(xx),y(yy){}

	double udaljenost(const Tacka& t) const {
		return sqrt(pow((x - t.x), 2) + pow(y - t.y, 2));

	}
	bool operator==(const Tacka t);
	friend ostream& operator <<(ostream& os, const Tacka& t);
private:

	int x, y;




};

#endif // !_Tacka_h_
