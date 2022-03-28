#ifndef _Igrac_h_
#define _Igrac_h_

#include <iostream>
#include <string>
using namespace std;
class Igrac {
	string ime;
	int vrednost;


public:
	Igrac(string i,int v=1000):ime(i),vrednost(v){}


	void povecajVrednost(double proc);
	void smanjiVrednost(double proc);

	
	int getVrednost() const { return vrednost; }


	bool operator==(const Igrac& i) const;
	friend ostream& operator<<(ostream& os, const Igrac& i);

};
#endif // !_Igrac_h_
